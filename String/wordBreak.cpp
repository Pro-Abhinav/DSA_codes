#include<iostream>

using namespace std;

//I have used recursion in this problem.

string DICTIONARY[] = {"mobile","samsung","sam","sung",
                            "man","mango","icecream","and",
                             "go","i","like","ice","cream"};

bool isAvail(string str){



    int siz = sizeof(DICTIONARY)/sizeof(DICTIONARY[0]);

    for(int i=0;i<siz;i++)
        if(DICTIONARY[i] == str)
            return true;
    return false;
}

bool wordBreak(string str)
{
    int siz = str.length();

    if(siz==0) return true;

    for(int i=1;i<=siz;i++)
    {
        if(isAvail(str.substr(0,i)) && wordBreak(str.substr(i,siz-i)))
            return true;
    }

    return false;
}


int main()
{
    string str = "ilikemango";
    wordBreak(str) ? cout<<"Yes" : cout<<"No";
}
