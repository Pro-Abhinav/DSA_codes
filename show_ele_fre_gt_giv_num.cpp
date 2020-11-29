#include<iostream>
#include<unordered_map>

using namespace std;

void countFreq(int *ar, int siz, int k)
{
    unordered_map<int,int> mp;

    for(int i=0;i<siz;i++)
        mp[ar[i]]++;

    for(auto i: mp)
    {
        if(i.second > (siz/k))
            cout<<i.first<<" ";
    }
}

int main()
{
    int ar[]= {3, 1, 2, 2, 1, 2, 3, 3};
    int siz = sizeof(ar)/sizeof(ar[0]);
    int k = 4;

    countFreq(ar, siz, k);
}
