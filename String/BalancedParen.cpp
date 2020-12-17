#include<iostream>
#include<stack>

using namespace std;

bool checkParen(string &str, int siz){

    stack<char> st;

    for(int i=0;i<siz;i++)
    {
        if(str[i]=='(' || str[i] == '{' || str[i] == '['){
            st.push(str[i]);
            continue;
        }

        if(st.empty())
            return false;

        switch(str[i]){
            case ')' :
                if(st.top() == '{' || st.top() == '[')
                    return false;
                else
                    st.pop();
                break;

            case '}' :
                if(st.top() == '(' || st.top() == '[')
                    return false;
                else
                    st.pop();
                break;
            case ']' :
                if(st.top() == '{' || st.top() == '(')
                    return false;
                else
                    st.pop();
                break;
        }
    }

    return(st.empty());
}

int main(){
    string str = "{()()(){()}}";

    int siz = str.length();


    if(checkParen(str, siz))
        cout<<"Balanced";
    else
        cout<<"Not Balanced";
}
