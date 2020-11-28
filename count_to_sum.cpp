#include<bits/stdc++.h>

using namespace std;

int countPair(int *ar, int siz, int num)
{
    unordered_map<int,int>m;

    for(int i=0;i<siz;i++)
    {
        m[ar[i]]++;
    }

    int count_num = 0;

    for(int i=0;i<siz;i++)
    {
        count_num += m[num-ar[i]];

        //for numbers who itself can produce sum;
        if(num-ar[i]==ar[i])
            count_num--;
    }
    return count_num/2;
}

int main()
{
    int ar[] = {1,5,7,1};
    int siz = sizeof(ar)/sizeof(ar[0]);
    int num = 6;

    cout<<"Number of pairs are: "<<countPair(ar, siz, num);
}
