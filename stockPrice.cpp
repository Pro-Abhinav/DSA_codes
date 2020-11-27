#include<bits/stdc++.h>

using namespace std;

int calculateTime(int *ar, int siz)
{
    int minValue = INT_MAX;
    int maxProfit = 0;

    for(int i=0;i<siz;i++)
    {
        if(ar[i]<minValue)
            minValue=ar[i];
        else if(maxProfit<ar[i]-minValue)
            maxProfit = ar[i];
    }
    return maxProfit;
}

int main()
{
    int ar[]={7,1,5,3,6,4};
    int siz = sizeof(ar)/sizeof(ar[0]);

    cout<<calculateTime(ar, siz);
}
