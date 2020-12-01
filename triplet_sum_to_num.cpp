#include<iostream>
#include<algorithm>

using namespace std;

void find3plets(int *ar, int siz, int num)
{
    sort(ar,ar+siz);

    for(int i=0;i<siz-2;i++)
    {
        int low = i+1;
        int high = siz-1;
        while(low<high)
        {
            if(ar[i]+ar[low]+ar[high]==num){
                printf("Triplets are [%d, %d, %d]", ar[i],ar[low], ar[high]);
                break;
            }

            else if(ar[i]+ar[low]+ar[high]>num)
                high--;
            else if(ar[i]+ar[low]+ar[high]<num)
                low++;
        }
    }
}

int main()
{
    int num;
    int ar[] = {1, 4, 45, 6, 10, 8};
    int siz = sizeof(ar)/sizeof(ar[0]);
    cout<<"Enter the number: ";
    cin>>num;

    find3plets(ar, siz, num);
}
