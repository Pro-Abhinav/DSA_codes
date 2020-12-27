#include<iostream>
#include<stack>
#include<ctype.h>
#include<cmath>

using namespace std;

int parenthesisRev(string str, int siz)
{

    if(siz%2 != 0)
        return -1;

    stack<char> st;
    for(int i=0;i<siz;i++)
    {
        if(str[i] == '}' && !st.empty()){
            if(st.top() == '{')
                st.pop();
            else
                st.push(str[i]);
        }
        else
            st.push(str[i]);
    }

    double stackSize = st.size();

    double n = 0;
    while (!st.empty() && st.top() == '{')
    {
        st.pop();
        n++;
    }

//    return (stackSize/2 + n%2);
    //OR
    return ceil((stackSize-n)/2) + (ceil(n/2));
}

int main()
{
    string str = "}{{{}}{{";
    int siz = str.length();

    cout<<parenthesisRev(str, siz);
}
