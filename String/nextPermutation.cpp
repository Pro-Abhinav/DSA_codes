#include<iostream>
#include<algorithm>
using namespace std;

void printString(string &str){
    for(int i=0;i<str.length();i++)
        cout<<str[i];
}

void nextPermutation(string &str)
{

    int siz = str.length();

    if(siz<=0)
        cout<<"Not Possible";

    int i;

    for(i=siz-2;i>=0;i--){
        if(str[i]<str[i+1])
            break;
    }

    if(i<0){
        sort(str.begin(), str.end());
        return;
    }

    int j = siz-1;
    while(j>=0 && str[j] <= str[i]){
        j--;
    }

    swap(str[i], str[j]);

    int y = str.length()-1;
    while(++i<y){
        swap(str[i], str[y--]);
    }

}

int main()
{
    string str = "342424";

    nextPermutation(str);
    printString(str);
}
