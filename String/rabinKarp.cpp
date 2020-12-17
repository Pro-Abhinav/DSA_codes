#include<iostream>

#define p 101
#define d 32

using namespace std;

//mod value for hash value: p -> prime number
//str -> string on which action will be performed
//strTxt -> string used to check.
//d-> expected characters in string.

void rabinKarp(string &strPat, string &strTxt)
{
    int patSiz = strPat.length();
    int txtSiz = strTxt.length();
    int hashPat = 0;
    int hashTxt = 0;
    int h = 1;

    for(int i=0;i<patSiz-1;i++)
        h = (h*d)%p;

    for(int i=0;i<patSiz;i++)
    {
        hashPat = (hashPat * d + strPat[i])%p;
        hashTxt = (hashTxt * d + strTxt[i])%p;
    }

    int j;
    for(int i=0;i<=txtSiz-patSiz;i++)
    {
        if(hashPat == hashTxt){
            for(j=0;j<patSiz;j++){
                if(strPat[j] != strTxt[i+j])
                    break;
            }
            if(j == patSiz)
                cout<<"Pattern found at "<<i<<endl;
        }
        if(i < txtSiz-patSiz)
        {
            hashTxt = (d * (hashTxt-strTxt[i]*h) + strTxt[i+patSiz])%p;

            if(hashTxt < 0)
                hashTxt = (hashTxt + p);
        }
    }


}

int main()
{
    string strPat = "aaa";
    string strTxt = "aabaaa";

    rabinKarp(strPat, strTxt);
    return 0;
}
