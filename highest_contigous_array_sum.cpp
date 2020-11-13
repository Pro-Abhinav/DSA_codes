#include<iostream>

using namespace std;

int calc_sum(int *ar, int siz)
{
    int tillMax = ar[0];
    int nowMax = ar[0];
    for(int i=1;i<siz;i++)
    {
        nowMax = max(ar[i], nowMax+ar[i]);
        tillMax = max(nowMax, tillMax);
    }
    return tillMax;
}

int main()
{
    int ar[] = {-22,3,1,1};
    int siz = sizeof(ar)/sizeof(ar[0]);

    cout<<"Maximum sum of contiguous subarray is: "<<calc_sum(ar, siz);
}
