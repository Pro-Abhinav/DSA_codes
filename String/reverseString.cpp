#include<iostream>

using namespace std;

void rev(char *str, int siz)
{
    for(int i=0;i<siz/2;i++)
        swap(str[i],str[siz-i-1]);
}

int main()
{
    char str[] ="Pro-Abhinav";
    int siz = sizeof(str)/sizeof(str[0]);

    rev(str, siz);

    for(int i=0;i<siz;i++)
        cout<<str[i];
}
