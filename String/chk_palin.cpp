#include<iostream>

using namespace std;

bool chk_palin(char *str, int siz)
{
    int i=0,j=siz-2;
    while(i<j)
    {
        if(str[i]==str[j]){
            i++;j--;
        }
        else
            return false;
    }
    if(i==j)
        return true;
}

int main()
{
    char str[] = "malayalam";
    int siz = sizeof(str)/sizeof(str[0]);

    if(chk_palin(str, siz))
        cout<<"Yes";
    else
        cout<<"No";

}
