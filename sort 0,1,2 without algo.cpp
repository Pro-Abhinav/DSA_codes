#include <iostream>
#include<climits>
using namespace std;


void sortArray(int *ar, int size)
{
    int count0=0,count1=0,count2=0;
    for(int i=0;i<size;i++)
    {
        if(ar[i]==0)
            count0++;
        else if(ar[i]==1)
            count1++;
        else if(ar[i]==2)
            count2++;
    }
        int j=0;

        while(count0>0)
        {
            ar[j]=0;
            count0--;
            j++;
        }
        while(count1>0)
        {
            ar[j]=1;
            count1--;
            j++;
        }
        while(count2>0)
        {
            ar[j]=2;
            count2--;
            j++;
        }
}

void printArray(int *ar, int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    int no_test, size;
    cin>>no_test;
    for(int i=0;i<no_test;i++)
    {
        cin>>size;
        int ar[size];
        for(int j=0;j<size;j++)
        {
            cin>>ar[j];
        }
        sortArray(ar, size);
        printArray(ar, size);
    }

	return 0;
}
