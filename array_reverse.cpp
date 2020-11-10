#include<iostream>

using namespace std;

void reverseArray(int *arr, int length)
{
    int temp;
    for(int i=0;i<length/2;i++)
    {
        temp = arr[i];
        arr[i]=arr[length-1-i];
        arr[length-1-i] = temp;
    }
}

void printArray(int *arr, int length)
{
    for(int i=0;i<length;i++)
        cout<<arr[i];
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int length = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr, length);

    printArray(arr, length);
}
