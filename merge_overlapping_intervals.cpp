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
        cout<<ar[i+1];
        if(_end > ar[i+1])
        {
            _end = ar[i+2];
            for(int j=i;j<siz;j++)
            {
                ar[j]=ar[j+2];
            }
            siz-=2;
        }
        cout<<ar[i+1];
        cout<<ar[i]<<_end<<"\n";
    }
    printArray(ar, siz);
    cout<<"\n"<<siz;
}

int main()
{
    int ar[] = {1,3,2,4,3,6,7,8};
    int siz = sizeof(ar)/sizeof(ar[0]);

    mergeIntervals(ar, siz);
}
