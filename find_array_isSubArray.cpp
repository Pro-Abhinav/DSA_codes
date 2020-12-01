#include<iostream>
#include<unordered_map>

using namespace std;

bool chk_subarray(int *ar, int *subAr, int arsiz, int subsiz)
{
    unordered_map<int, int> mp;

    for(int i=0;i<arsiz;i++)
        mp[ar[i]]++;

    for(int i=0;i<subsiz;i++)
    {
        if(mp[subAr[i]] && mp[subAr[i]]>0)
            mp[subAr[i]]--;
        else
            return false;
    }
}

int main()
{
    int ar[] = {11, 1, 13, 21, 3,7,7,5};
    int subAr[]= {11, 3, 7, 1,7,1};

    int arsiz = sizeof(ar)/sizeof(ar[0]);
    int subsiz = sizeof(subAr)/sizeof(subAr[0]);

    if(chk_subarray(ar, subAr, arsiz, subsiz))
        cout<<"Yes";
    else
        cout<<"No";
}
