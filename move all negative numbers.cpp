#include<iostream>

using namespace std;

void swap_pos(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void quicksort(int *ar, int size)
{
    int pivot = ar[size-1], j=0;
    for(int i=0;i<size-1;i++)
    {
        if(ar[i]>0)
        {
            if(i!=j)
            {
                swap_pos(&ar[i], &ar[j]);
                j++;
            }
        }
    }
    swap_pos(&ar[j],&ar[size-1]);
}

void printArray(int *ar, int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<ar[i]<<" ";
    }
}

int main()
{
    int arr[] = {-23,2,-2,-5,-2,-11};
    int size = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr, size);

    printArray(arr, size);
}
