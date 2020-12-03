#include<iostream>

using namespace std;

void createSeq(int num)
{
    if(num==1)
        cout<<'1';
    if (num==2)
        cout<<"11";

    string str = "11";
    for(int i=3;i<=num;i++)
    {
        str +='$';
        int len = str.length();
        string temp = "";
        int cnt = 1;
        for(int j=1;j<len;j++)
        {
            if(str[j]!=str[j-1])
            {
                temp += cnt + '0';

                temp += str[j-1];

                cnt=1;
            }
            else
                cnt++;
        }
        str=temp;
    }
    for(int i=0;i<str.length();i++)
        cout<<str[i];
}

int main()
{
    int num = 5;

    createSeq(num);
}

