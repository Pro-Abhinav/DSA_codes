#include<iostream>

using namespace std;

void printArray(int *ar, int siz)
{
    for(int i=0;i<siz;i++)
    {
        cout<<ar[i]<<" ";
    }
}

void revereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void chk_greater(int *ar, int siz)
{
    if(siz<=1)
        return;
    int pivot =0;
    for(int i=siz-2;i>=0;i--)
    {
        if(ar[i]<ar[i+1])
        {
            pivot = i;
            break;
        }
    }
    int minm = ar[pivot+1]-ar[pivot];
    int rev = pivot+1;
    for(int i=pivot;i<siz;i++)
    {
        if(minm>=(ar[i]-ar[pivot])&&(ar[i]-ar[pivot])>=0&&ar[i])
            rev = i;
    }

    int temp = ar[pivot];
    ar[pivot] = ar[rev];
    ar[rev] = temp;

    cout<<pivot<<siz-1;
    //printArray(ar,siz);
    revereseArray(ar, pivot+1, siz-1);

    printArray(ar, siz);
}



int main()
{
    int ar[] = {2,3,1,3,3};
    int siz = sizeof(ar)/sizeof(ar[0]);

    chk_greater(ar, siz);
}
