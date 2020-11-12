#include<iostream>

using namespace std;

int minimizeDiff(int *ar, int siz, int k)
{
    int inDiff = ar[siz-1]-ar[0];

    int low = ar[0]+k;
    int high = ar[siz-1]-k;

    if(low>high)
        swap(low, high);

    for(int i=0;i<siz;i++)
    {
        int add = ar[i]+k;
        int sub = ar[i]-k;

        if(sub>=low || add<=high)
            continue;

        if(high-sub <= low-add)
            low = sub;
        else
            high = add;
    }

    return min(inDiff, high-low);
}

int main()
{
    int ar[] = {1,2,2,2,3,3,4,5,6,7,10};
    int siz = sizeof(ar)/sizeof(ar[0]);
    int k=5;

    cout<<minimizeDiff(ar, siz, k);
}
