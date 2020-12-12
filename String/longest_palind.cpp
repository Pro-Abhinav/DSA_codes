#include<iostream>
#include<string.h>

using namespace std;

void printSubStr(string str, int first, int len){

    cout<<"Longest Palindromic substring in the given string is: '";
    for(int i=first; i<first+len; i++)
        cout<<str[i];
    cout<<"' having length = "<<len;

}

void longestPalin(string str, int siz)
{
    int maxlength = 1;
    int first;
    int low, high;
    for(int i=1;i<siz;i++)
    {
        low = i-1;
        high = i;
        while(low>=0 && high <siz && (str[low]==str[high])){
            if( high-low+1 > maxlength )
            {
                first = low;
                maxlength = high - low + 1;
            }
            low--;high++;
        }

        low = i-1;
        high = i+1;
        while(low>=0 && high <siz && (str[low]==str[high])){
            if( high-low+1 > maxlength )
            {
                first=low;
                maxlength = high - low + 1;
            }
            low--;high++;
        }
    }

    printSubStr(str, first, maxlength);
}

int main()
{
    string str = "abhijahaj";
    int siz = str.length();

    longestPalin(str, siz);
}
