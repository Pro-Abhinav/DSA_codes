#include<iostream>
#include<unordered_map>

using namespace std;

void dupChar(char *str, int siz)
{
    unordered_map<char, int> mp;

    for(int i=0;i<siz;i++)
        mp[str[i]]++;

    for(auto i: mp)
        if (i.second > 1)
            cout<<i.first<<endl;
}

int main()
{
    char str[] = "jahaj";
    int siz = sizeof(str)/sizeof(str[0]);

    dupChar(str, siz);
}
