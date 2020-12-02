#include<iostream>
#include<algorithm>

using namespace std;


void printArray(int *ar, int siz)
{
    for(int i=0;i<siz;i++)
        cout<<ar[i]<<" ";
}

void sortArray(int *ar , int siz, int *values)
{
    int start = 0, _end = siz-1;
    for(int i=0;i<=_end;)
    {
        if(ar[i]<values[0])
            swap(ar[i++], ar[start++]);
        else if(ar[i]>values[1])
            swap(ar[i], ar[_end--]);
        else
            i++;
    }
    printArray(ar, siz);
}

int main()
{
    int ar[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
    int siz = sizeof(ar)/sizeof(ar[0]);
    int values[] = {4, 20};

    sortArray(ar, siz, values);
}
