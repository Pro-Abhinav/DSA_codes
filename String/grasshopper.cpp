#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int t,N,S,E,C,energy=0;
    char str[1000];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>N>>S>>E>>C;
        cin>>str;
        if(str[S-1] != str[E-1])
            cout<<C;
        else
            cout<<0;
    }
    return 0;
}
