#include<iostream>

using namespace std;

string convertIntoNum(string numpad[], string str)
{
    int siz = str.length();
    string answer = "";

    for(int i=0;i<siz;i++)
    {
        if(str[i]== ' ')
            answer = answer + "0";
        else{
            int pos = str[i] - 'A';
            answer = answer + numpad[pos];
        }
    }
    return answer;
}

int main()
{
    //mapping of keystrokes
    string numpad[] = {"2","22","222",
					"3","33","333",
					"4","44","444",
					"5","55","555",
					"6","66","666",
					"7","77","777","7777",
					"8","88","888",
					"9","99","999","9999"};

    //Only Capital letters are allowed
    string str = "ABHI";

    cout<<convertIntoNum(numpad, str);
}
