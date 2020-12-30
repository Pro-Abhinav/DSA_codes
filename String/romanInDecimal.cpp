#include<iostream>
#include<map>

using namespace std;

map<char, int> dictionary = {
        {'I',1}, {'V',5},
        {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500},{'M', 1000}
    };
map<char, int>::iterator it;

void romanToDecimal(string str)
{
    int siz = str.length();
    int num[siz];
    int j=0, sum=0;

    for(int i=0;i<siz;i++)
    {
        it = dictionary.find(str[i]);

        if(it == dictionary.end())
            cout << "Key-value pair not present in map" ;
        else
            num[j++] = it->second ;
    }
    if(siz==1)
        cout<<num[siz-1];
    for(j=0;j<siz-1;j++)
    {
        if((num[j] < num[j+1]) && (j==0))
            sum = sum + (num[j+1] - num[j]);
        else if (num[j] < num[j+1])
            sum = sum + (num[j+1] - num[j]) - num[j];
        else if ((num[j]>=num[j+1]) && (j==0))
            sum = sum + (num[j+1] + num[j]);
        else
            sum = sum + (num[j+1] + num[j]) - num[j];
    }
    cout<<sum;

}

int main(){

    string str = "XXIII";

    romanToDecimal(str);

}

