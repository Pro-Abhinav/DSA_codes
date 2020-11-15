#include<iostream>

using namespace std;

int mergeArray(int *ar1, int* ar2, int size1, int size2)
{
    for(int i = size2-1;i>=0;i--)
    {
        int j, last=ar1[size1-1];
        for(j=size1-2;j>=0 && ar1[j]>ar2[i];j--)
            ar1[j+1] = ar1[j];

        if(j!=size1-2 || last>ar2[i])
        {
            ar1[j+1]=ar2[i];
            ar2[i]=last;
        }
    }
}

void printArray(int *ar1, int *ar2, int m, int n)
{
    for(int i=0;i<m;i++)
    {
        cout<<ar1[i];
    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<ar2[i];
    }
}

int main()
{
    int ar1[] = {1,3,4,7};
    int ar2[] = {2,5,8};

    int size1 = sizeof(ar1)/sizeof(ar1[0]);
    int size2 = sizeof(ar2)/sizeof(ar2[0]);


    mergeArray(ar1, ar2, size1, size2);

    printArray(ar1, ar2, size1, size2);
}
