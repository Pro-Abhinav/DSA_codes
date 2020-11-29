#include<iostream>
#include<algorithm>

using namespace std;

int findMaxProduct(int *ar, int siz)
{
    int maxProd,minProd, maxNow = 0;
    maxProd=minProd=ar[0];

    for(int i=0;i<siz;i++)
    {
        if(ar[i]<0)
            swap(maxProd, minProd);
        maxProd = max(maxProd*ar[i], ar[i]);
        minProd = min(minProd*ar[i], ar[i]);

        maxNow = max(maxProd, maxNow);
    }
    return maxNow;
}

int main()
{
    int ar[] = {-1,3,-5,1};
    int siz = sizeof(ar)/sizeof(ar[0]);

    cout<<findMaxProduct(ar, siz);
}
