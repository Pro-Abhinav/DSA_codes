#include<iostream>
#include<algorithm>

using namespace std;

void printSubs(string str, string result)
{
    if(str.length() == 0){
        cout<<result<<" ";
        return;
    }

    char ch = str[0];

    string _sub = str.substr(1);

    printSubs(_sub, result);

    printSubs(_sub, result+ch);
}

int main()
{
    string str = "abc";

    printSubs(str, "");
}
