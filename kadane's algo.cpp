#include<iostream>

using namespace std;

int checkArray(int *ar, int siz)
{
    int maxtill = ar[0];
    int maxnow = ar[0];

    for(int i=1;i<siz;i++)
    {
        maxnow = max(ar[i], maxnow+ar[i]);
        maxtill = max(maxtill, maxnow);
    }
    return maxtill;
}

int main()
{
    int ar[] = {-6,-4,10,2,-1,5};
    int siz = sizeof(ar)/sizeof(ar[0]);

    cout<<"Largest sum of the contiguous subarray is: "<<checkArray(ar, siz);
}
