#include<iostream>
#include<algorithm>

using namespace std;

int longestRepeatingSubs(string str)
{
    int siz = str.length();
    int mat[siz+1][siz+1];

    cout<<siz<<endl;

    for(int i=siz-1;i>=0;i--)
    {
        for(int j=siz-1; j>=0;j--){
            if(i==siz-1 && j== siz-1) {
                mat[i][j] = 0;
            } else if ( i == siz-1 ) {
                mat[i][j] = 0;
            } else if ( j == siz-1) {
                mat[i][j] = 0;
            } else {
                if(str[i] == str[j] && i != j) {
                    mat[i][j] = mat[i+1][j+1] + 1;
                } else {
                    mat[i][j] = max(mat[i+1][j], mat[i][j+1]);
                }
            }
        }
    }

    return mat[0][0];
}

int main()
{
    string str = "abacabaaac";

    cout<<longestRepeatingSubs(str);
}
