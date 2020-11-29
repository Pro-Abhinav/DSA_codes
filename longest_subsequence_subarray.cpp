#include<iostream>
#include<unordered_set>
#include<algorithm>

using namespace std;

int findLongestConseqSubseq(int arr[], int N)
{
  unordered_set<int> S;
  int high = 0;

  for(int i=0;i<N;i++)
    S.insert(arr[i]);

  for(int i=0;i<N;i++)
  {
      if(S.find((arr[i]-1))==S.end())
      {
          int j = arr[i];
          while(S.find(j)!=S.end())
          {
              j++;

              high  = max(high, j-arr[i]);
          }
      }
  }
  return high;
}

int main()
{
    int ar[] = {1,6,34,3,2};
    int siz = sizeof(ar)/sizeof(ar[0]);

    cout<<findLongestConseqSubseq(ar, siz);
}
