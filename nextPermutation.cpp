#include<bits/stdc++.h>

using namespace std;

void printArray(vector<int>& ar, int siz)
{
    for(int i=0;i<siz;i++)
    {
        cout<<ar[i]<<" ";
    }
}

void chk_greater(vector<int>& arr, int siz)
{

     // if items less than 2
        if(arr.size() <= 1) return;

        int i;
        for(i = arr.size() - 2; i >= 0; i--){
            if(arr[i] < arr[i+1])
                break;
        }

        //if no decreasing element is found then no permutation
        //is possible return the first permutation

        if(i < 0){
            sort(arr.begin(), arr.end());
            return;
        }

        //near most element of i that is bigger than i.

        int j = arr.size() - 1;
        while( j >= 0 && arr[j] <= arr[i]) j--;

        //swap i, j

        swap(arr[i], arr[j]);

        //till this result in forming the last combination of arrangement starting from j
        //now make the smallest permutaion by reversing this.

        j = arr.size() - 1;
        while(++i < j){
            swap(arr[i], arr[j--]);
        }
        printArray(arr, siz);
}



int main()
{
    vector<int> ar{1,4,3};
    int siz = sizeof(ar)/sizeof(ar[0]);

    chk_greater(ar, siz);
}
