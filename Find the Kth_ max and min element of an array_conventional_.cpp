#include<iostream>

using namespace std;

void sortArray(int *arr, int length)
{
    int temp;
    for(int i=0;i<length-1;i++)
    {
        for (int j = 0; j < length-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
//                temp = arr[j];
//                arr[j]=arr[j+1];
//                arr[j+1] = temp;
                    arr[j] = arr[j]+arr[j+1];
                    arr[j+1] = arr[j]-arr[j+1];
                    arr[j] = arr[j]-arr[j+1];

            }
        }
    }
}

void printResult(int *arr, int length)
{
    int k;
    cout<<"Enter the position of the number in the array: ";
    cin>> k;
    cout<<"\n"<<k<<"th minimum number of the array is "<<arr[k-1];
}

int main()
{
    int arr[] = {3,2,5,3,1,3,6,7,8,56,4567,34};
    int length = sizeof(arr)/sizeof(arr[0]);

    sortArray(arr, length);

    printResult(arr, length);
}
