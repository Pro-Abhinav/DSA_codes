#include<iostream>

#define MAX 500

using namespace std;

void printArray(int *ar, int siz)
{
    for(int i=siz-1;i>=0;i--)
    {
        cout<<ar[i];
    }
}

int multiply(int i,int *result, int res_size)
{
    int carry = 0;

    for(int j=0;j<res_size;j++)
    {
        int product = result[j]*i + carry;

        result[j]=product%10;

        carry = product/10;
    }

    while(carry)
    {
        result[res_size] = carry%10;
        carry /=10;
        res_size++;
    }
    return res_size;
}

void factorial(int num)
{
    int result[MAX];

    result[0]=1;
    int res_size = 1;

    for(int i=2;i<=num;i++)
        res_size = multiply(i,result,res_size);

    printArray(result, res_size);
}

int main()
{
    int num;
    cout<<"Insert the number: ";
    cin>>num;

    factorial(num);
}
