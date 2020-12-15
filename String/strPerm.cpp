#include<iostream>
#include<algorithm>

using namespace std;

void findPerm(string str, int low, int high)
{
    if(low==high){
        cout<<str<<" ";
        return;
    } else {
        for(int i=low;i<=high;i++){
            swap(str[low], str[i]);

            findPerm(str, low+1, high);

            swap(str[low], str[i]);
        }
    }
}

int main()
{
    string str = "abc";
    int siz = str.length();
    findPerm(str, 0, siz-1);
}
