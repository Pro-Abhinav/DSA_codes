#include<iostream>

using namespace std;

void printArray(int *ar, int siz)
{
    for(int i=0;i<siz;i++)
    {
        cout<<ar[i];
    }
}

int mergeIntervals(int *ar, int siz)
{
    int _start = ar[0], _end =ar[1];

    for(int i=1;i<siz-1;i+=2)
    {
        if(_end > ar[i+1])
        {
            _end = ar[i+2];
            ar[i+1]=INT_MAX;
            ar[i] = INT_MAX;
        }
    }

    for(int i=0;i<siz;i++)
    {
        if(ar[i]==INT_MAX)
        {
            int j;
            for(j=i;j<siz;j++)
            {
                ar[j]=ar[j+1];
            }
            siz--;
            i--;
        }
    }
    printArray(ar, siz);
}

int main()
{
    int ar[] = {1,3,2,4,3,6,7,8,8,9};
    int siz = sizeof(ar)/sizeof(ar[0]);

    mergeIntervals(ar, siz);
}
