#include<iostream>
#include<unordered_set>

using namespace std;

bool findSubarray(int *ar, int siz)
{
    unordered_set<int> cumaSet;
    int cs = 0;

    for(int i=0;i<siz;i++)
    {
        cs+=ar[i];

        if(cs==0 || cumaSet.find(cs) != cumaSet.end())
            return true;

        cumaSet.insert(cs);
    }
    return false;
}

int main()
{
    int ar[] = {10,2,1,1,5};
    int siz = sizeof(ar)/sizeof(ar[0]);

    if (findSubarray(ar, siz))
        cout<<"Yes";
    else
        cout<<"No";
}
