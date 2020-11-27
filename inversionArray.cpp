#include<bits/stdc++.h>

using namespace std;

int mergeSort(int *ar, int *temp, int l, int h);

//function to initialize a temporary array
int _mergeSort(int *ar, int siz)
{
    int temp[siz];
    return mergeSort(ar, temp, 0, siz-1);
}

//function for 2 way merging
int _merge(int *ar,int *temp, int l,int mid, int h )
{
    int inv_count=0;
    int i=l, j=mid, k=l;

    while((i<=mid-1) && (j<=h)){
        if(ar[i]<=ar[j])
        {
            temp[k++] = ar[i++];
        }
        else{
            temp[k++] = ar[j++];
            inv_count = inv_count + (mid - i);
        }
    }

    while(i<=mid-1)
    {
        temp[k++] = ar[i++];
    }
    while(j<=h)
    {
        temp[k++] = ar[j++];
    }
    for(i=l;i<=h;i++)
        ar[i] = temp[i];

    return inv_count;
}

//function for reducing array to base problem.
int mergeSort(int *ar,int *temp, int l, int h)
{
    int mid,inv_count=0;

    if(h>l)
    {
        mid = (l + h)/2;
        inv_count += mergeSort(ar,temp, l, mid);
        inv_count += mergeSort(ar,temp, mid+1, h);

        inv_count += _merge(ar,temp, l, mid+1, h);
    }

    return inv_count;
}

//function to print sorted array (if necessary)
void printArray(int *ar, int siz)
{
    for(int i=0;i<siz;i++)
    {
        cout<<ar[i]<<" ";
    }
}

//main function
int main()
{
    int ar[] = {2, 4, 1, 3, 5};
    int siz = sizeof(ar)/sizeof(ar[0]);

    cout<<_mergeSort(ar,siz);
//    printArray(ar, siz);
}

