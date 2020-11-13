#include<iostream>

using namespace std;

void findDuplicate(int ar[])
{
    int hare, tortoise;
    hare= tortoise = ar[0];

    while(true)
    {
        tortoise = ar[tortoise];
        hare = ar[ar[hare]];
        if(tortoise == hare)
            break;
    }

    tortoise = ar[0];
    while(hare != tortoise)
    {
        tortoise = ar[tortoise];
        hare = ar[hare];
    }
    cout<<hare;
}

int main()
{
    int ar[]={1,2,6,5,4,3,5};

    findDuplicate(ar);
}
