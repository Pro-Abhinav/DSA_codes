#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void dist_choco(vector<int> packets, int st)
{
    int siz = packets.size();
    sort(packets.begin(), packets.end());

    int place = 0;

    while(true)
    {
        if(packets[place]>0)
            break;
        place++;
    }

    int i = place, j=place+st-1;
    int mini = INT_MAX;

    while(j<siz)
    {

        mini = min(packets[j]-packets[i], mini);
        i++;
        j++;
    }

    cout<<mini<<endl;
    for(int i=0;i<siz;i++)
        cout<<packets[i]<<" ";
    cout<<endl;
}

int main()
{
    vector<int> packets = {3, 4, 1, 9, 56, 7, 9, 12};
    int stu = 5;

    dist_choco(packets, stu);
}
