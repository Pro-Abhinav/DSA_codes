#include<iostream>
#include<algorithm>
#include<limits.h>

using namespace std;

void calculateProfit(int *trend, int siz)
{
    int profit[siz];
    for(int i=0;i<siz;i++)
        profit[i] = 0;

    int max_price=trend[siz-1], min_price=trend[0];
    for(int i=siz-2;i>=0;i--)
    {
        if(trend[i]>max_price)
            max_price = trend[i];

        profit[i] = max(profit[i+1], max_price-trend[i]);
    }

    for(int i=1;i<siz;i++)
    {
        if(trend[i]<min_price)
            min_price = trend[i];

        profit[i] = max(profit[i-1], profit[i]+(trend[i]-min_price));
    }

    cout<<profit[siz-1];
}

int main()
{
    int trend[] = { 2, 30, 15, 10, 250, 8, 80 };
    int siz = sizeof(trend)/sizeof(trend[0]);

    calculateProfit(trend, siz);
}
