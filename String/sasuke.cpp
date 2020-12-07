#include <bits/stdc++.h>
using namespace std;

#define int  long long int

bool isPowerOfTwo(int n){

    if(n==0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}

signed main()
{
    int t;

    cin>>t;

    while(t--){

    int p1,_count,temp;

    cin>>p1;

    if(p1==1 || isPowerOfTwo(p1)){
        cout<<0<<endl;
    }
    else if(p1%2==0){

        _count=-1;
        temp=p1;
        int fi =0;

        while(temp%2==0){
            temp/=2;
            if (temp%5==0)
            {
                fi++;
                temp-=1;
                _count++;
                continue;
            }
            _count++;
        }
        cout<<floor(p1/pow(2,_count))<<endl;
    }
    else{
        cout<<(p1/2)<<endl;
    }
    }

    return 0;
}

