#include<iostream>
#include<climits>

using namespace std;

void findMinMax(int *arr, int length)
{
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i=0;i<length;i++)
    {
        if(mini>arr[i])
        {
            mini = arr[i];
        }
        if(arr[i]>maxi)
        {
             maxi = arr[i];
        }
    }

    cout<<"Maximum number in the array is "<<maxi;
    cout<<"\nMinimum number in the array is "<<mini;

}

int main()
{
    int arr[] = {-1,2,3,4,5,6,72342424};
    int length = sizeof(arr)/sizeof(arr[0]);

    findMinMax(arr, length);
}
