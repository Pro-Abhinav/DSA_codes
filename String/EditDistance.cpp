#include<iostream>
#include<algorithm>

using namespace std;

int mini(int x, int y, int z) {
     return min(min(x, y), z);
}

int editDistacnce(string str1, string str2){

    int siz1 = str1.length();
    int siz2 = str2.length();

    int dp[siz1+1][siz2+1];

    for(int i=0;i<=siz1;i++)
    {
        for(int j=0;j<=siz2;j++)
        {
            if(i==0){
                dp[i][j] = j;
            } else if (j==0) {
                dp[i][j] = i;
            } else if (str1[i-1] == str2[j-1]){
                dp[i][j] = dp[i-1][j-1];
            } else {
                dp[i][j] = 1 + mini(dp[i][j-1], dp[i-1][j], dp[i-1][j-1]);
            }
        }
    }

    return dp[siz1][siz2];
}

int main()
{
    string str1 = "ukarst";
    string str2 = "utkarsh";

    cout<<editDistacnce(str1, str2);
}
