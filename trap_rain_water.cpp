#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void trapWater(vector<int> heights, int siz)
{
    int amount = 0;
    vector<int> left(siz), right(siz);

    left[0] = heights[0];
    right[siz-1] = heights[siz-1];

    for(int i=1;i<siz;i++)
        left[i] =  max(left[i-1], heights[i]);

    for(int i=siz-2;i>=0;i--)
        right[i] = max(right[i+1], heights[i]);

    for(int i=1;i<siz-1;i++)
        amount += min(left[i], right[i]) - heights[i];


    cout<<amount;
}

int main()
{
    vector<int>heights {2,0,3,2,0,1};
    int siz = heights.size();

    trapWater(heights, siz);
}
