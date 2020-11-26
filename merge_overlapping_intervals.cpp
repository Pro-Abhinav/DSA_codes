#include <bits/stdc++.h>

using namespace std;

struct Interval{
    int s, e;
};

bool compareInterval(Interval a, Interval b)
{
    return a.s < b.s;
}

void mergeInterval(Interval *ar, int siz)
{
    sort(ar, ar+siz, compareInterval);

    int index = 0;

    for(int i=1; i<siz; i++)
    {
        if(ar[index].e >= ar[i].s)
        {
            ar[index].e = max(ar[index].e, ar[i].e);
            ar[index].s = min(ar[index].s, ar[i].s);
        }
        else{
            index++;
            ar[index] = ar[i];
        }
    }

    cout<<"\nFinal merged arrays are: ";
    for(int i=0; i<=index; i++)
    {
        cout<< "["<<ar[i].s<<","<<ar[i].e<<"]";
    }
}

int main()
{
    Interval ar[] = { {6,8}, {4,9}, {2,4}, {4,7} };
    int siz = sizeof(ar)/sizeof(ar[0]);

    mergeInterval(ar, siz);

    return 0;
}
