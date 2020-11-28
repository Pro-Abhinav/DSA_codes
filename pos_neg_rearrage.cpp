#include <bits/stdc++.h>
using namespace std;

void rotateRight(int *ar, int siz, int misplace, int pos)
{
    char temp = ar[pos];
    for(int i=pos;i>misplace;i--)
        ar[i]=ar[i-1];
    ar[misplace]=temp;
}

void rearrange(int *ar, int siz)
{
    int misplace = -1;

    for(int i=0;i<siz;i++)
    {
        if(misplace>=0)
        {
            if(((ar[i]>=0) && (ar[misplace]<0)) || ((ar[i]<0) && (ar[misplace]>=0)))
            {
                rotateRight(ar, siz, misplace, i);

                if(i-misplace>=2)
                    misplace += 2;
                else
                    misplace = -1;
            }
        }
        if (misplace == -1)
        {
            if(((ar[i]>=0) && (!(i & 0x01))) || ((ar[i]<0) && (i & 0x01)))
               misplace = i;
        }
    }
}

void printArray(int *ar, int siz)
{
    for(int i=0;i<siz;i++)
    {
        cout<<ar[i]<<" ";
    }
}
int main()
{

	int arr[] = { -5, -2, 5, 2, 4, 7, 1, 8, 0, -8 };
	int n = sizeof(arr) / sizeof(arr[0]);

	rearrange(arr, n);

	cout <<"Rearranged array is \n";
	printArray(arr, n);

	return 0;
}
