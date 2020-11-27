#include<bits/stdc++.h>

using namespace std;

void _merge(int *ar, int l,int mid, int h)
{
    int siz1 = mid-l+1;
    int siz2 = h-mid;

    int left[siz1], right[siz2];

    //temporary arrays
    for(int i=0;i<siz1;i++)
        left[i]=ar[l+i];
    for(int j=0;j<siz2;j++)
        right[j]=ar[mid+1+j];

    int i=0, j=0, k=l;

    while(i<siz1 && j<siz2){
        if(left[i]<=right[j])
            ar[k++] = left[i++];
        else
            ar[k++] = right[j++];
    }

    while(i<siz1)
    {
        ar[k++] = left[i++];
    }
    while(j<siz2)
    {
        ar[k++] = right[j++];
    }
}

void mergeSort(int *ar, int l, int h)
{
    if(l<h)
    {
        int mid = (l + (h-1))/2;
        mergeSort(ar, l, mid);
        mergeSort(ar, mid+1, h);

        _merge(ar, l, mid, h);
    }
}

void printArray(int *ar, int siz)
{
    for(int i=0;i<siz;i++)
    {
        cout<<ar[i]<<" ";
    }
}

int main()
{
    int ar[] = {4,3,124,2};
    int siz = sizeof(ar)/sizeof(ar[0]);

    mergeSort(ar, 0, siz-1);
    printArray(ar, siz);
}
