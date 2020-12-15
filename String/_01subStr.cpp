#include<iostream>
#include<algorithm>

using namespace std;

void countSubs(string str, int siz){

    int one=0, zero=0, cnt=0;

    for(int i=0;i<siz;i++){
        if(str[i]=='0')
            zero++;
        else if(str[i]=='1')
            one++;
        if(one == zero)
            cnt++;
    }
    if(cnt == 0)
        cout<<-1;
    else
        cout<<cnt;
}

int main()
{
    string str = "0111100010";
    int siz = str.length();

    countSubs(str, siz);
}
