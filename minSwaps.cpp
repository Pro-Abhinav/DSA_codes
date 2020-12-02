#include<iostream>
#include<algorithm>

using namespace std;

void minMerges(int *ar, int siz, int num)
{
    int _less=0, _great = 0;
    for(int i=0;i<siz;i++)
        if(ar[i]<=num)
            _less++;

    for(int i=0;i<_less;i++)
        if(ar[i]>num)
            _great++;

    int merges=_great;
    for(int i=0,j=_less ;j<siz;i++,j++)
    {
        if(ar[i]>num)
            _great--;
        if(ar[j]>num)
            _great++;

        merges = min(merges, _great);
    }
    cout<<merges;
}

int main()
{
    int ar[] = {470, 10, 28, 338, 384, 0, 329, 405, 70 ,349, 40, 472, 212, 14, 411, 151, 215, 384, 368, 46, 256, 42 };
    int siz = sizeof(ar)/sizeof(ar[0]);
    int k = 186;
    minMerges(ar, siz, k);
}

