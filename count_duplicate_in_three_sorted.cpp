#include<bits/stdc++.h>

using namespace std;

int countDuplicate(int *ar1, int *ar2, int *ar3, int siz1, int siz2, int siz3)
{
    int i=0,j=0,k=0;
    int duplicate =0;

    while(i<siz1 && j<siz2 && k<siz3)
    {
        if(ar1[i]==ar2[j] && ar2[j]==ar3[k])
        {
            duplicate++;
            i++;j++;k++;
        }
        else if(ar1[i]<ar2[j])
            i++;
        else if(ar2[j]<ar3[k])
            j++;
        else
            k++;
    }
    return duplicate;
}

int main()
{
    int ar1[] = {4,5,8,9,11,12,100};
    int ar2[] = {3,6,8,10,11,100};
    int ar3[] = {1,2,3,8,11,18,19};
    int siz1 = sizeof(ar1)/sizeof(ar1[0]);
    int siz2 = sizeof(ar2)/sizeof(ar2[0]);
    int siz3 = sizeof(ar3)/sizeof(ar3[0]);

    cout<<"Number of duplicate numbers are: "<<countDuplicate(ar1, ar2, ar3, siz1, siz2, siz3);
}
