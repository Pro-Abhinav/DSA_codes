#include<iostream>

using namespace std;

void fnd_sbarray(int *ar, int siz, int num)
{
    int low=0, high=0, sum=0, min_length=siz+1;
    while(high<siz)
    {
        while(sum<=num && high<siz)
        {
            sum+=ar[high++];
        }
        while(sum>=num && low<siz)
        {
            if(high-low<min_length)
                min_length = high-low;
            sum -= ar[low++];
        }
    }
    if(min_length>siz)
        cout<<"No subarray exists";
    else
        cout<<min_length;
}

int main()
{
    int ar[] = {3,1,9,1,1,2};
    int num = 18;
    int siz = sizeof(ar)/sizeof(ar[0]);

    fnd_sbarray(ar, siz, num);

}
