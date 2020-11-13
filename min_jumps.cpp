#include<iostream>

using namespace std;

int calc_jumps(int *ar, int siz)
{
    if(siz<=1)
        return 0;
    if(ar[0]==0)
        return -1;
    int countJump = 1, maxJump=ar[0], step = ar[0];
    int i=1;
    for(i=1;i<siz;i++)
    {
        if(i==siz-1){
            return countJump;
        }

        maxJump = max(maxJump, i+ar[i]);
        step--;
        if(step==0)
        {
            countJump++;
            if(i>=maxJump)
                return -1;

            step = maxJump-i;
        }
        cout<<" "<<maxJump<<"-"<<step<<" ";
    }
    return -1;
}

int main()
{
    int ar[] = { 1, 3, 5, -2, -2, 2, 6, 7, 6, 8, 9 };
    int siz = sizeof(ar)/sizeof(ar[0]);

    cout<<"Minimum jumps required: "<<calc_jumps(ar, siz);
}
