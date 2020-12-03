#include<iostream>

using namespace std;

bool isRotate(string s1, string s2)
{
    if(s1.length() != s2.length())
        return false;
    string temp = s1 + s1;

    int i=0, j=0;

    while(i<temp.length() && j<s2.length())
    {
        if(temp[i]==s2[j])
        {
            i++;
            j++;
        }
        else
            i++;
    }
    if(j==s2.length())
        return true;
    else
        return false;
}

int main()
{
    string s1 = "ABCD";
    string s2 = "DABC";

    if(isRotate(s1, s2))
        cout<<"Strings are rotations of each other";
    else
        cout<<"String aren't rotations of each other";
}
