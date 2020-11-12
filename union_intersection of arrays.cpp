#include<iostream>

using namespace std;

void printArray(int* arr, int size, string line)
{
    cout<<line;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void union_array(int* ar1, int *ar2, int size1, int size2)
{
    int newSize = size1 + size2;
    int j = size1;
    int arr[newSize];
    for(int i=0;i<newSize;i++)
    {
        if(size1 > 0)
        {
            arr[i]=ar1[i];
            size1--;
        }
        else
            arr[i] = ar2[i-j];
    }
    printArray(arr, newSize, "Union of given array is: ");
}

void inter_array(int *ar1, int *ar2, int size1, int size2)
{
    int i=0,j=0;
    while(i<size1 && j<size2)
    {
        if(ar1[i]<ar2[j])
            cout<<ar1[i++];
        else if(ar1[i]>ar2[j])
            cout<<ar2[j++];
        else{
            cout<<ar2[j++];
            i++;
        }
    }
    while (i < size1)
        cout << ar1[i++];

    while (j < size2)
        cout << ar2[j++];
}



int main()
{
    int ar1[] = {1,2,3,4,5,6};
    int ar2[] = {5,6,7,8,9};
    int size1 = sizeof(ar1)/sizeof(ar1[0]);
    int size2 = sizeof(ar2)/sizeof(ar2[0]);

    union_array(ar1, ar2, size1, size2);
    inter_array(ar1, ar2, size1, size2);



}
