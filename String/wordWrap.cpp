#include<iostream>
#include<limits.h>

using namespace std;

int printSolution (int p[], int n)
{
    int k;
    if (p[n] == 1)
        k = 1;
    else
        k = printSolution (p, p[n]-1) + 1;
    cout<<"Line number "<<k<<": From word no. "<<p[n]<<" to "<<n<<endl;
    return k;
}

void wordWrap(int *strings, int siz, int width)
{
    int extraSpace[siz+1][siz+1];
    int lowestCost[siz+1][siz+1];
    int cost[siz+1], answer[siz+1];

    for(int i=1;i<=siz;i++)
    {
        extraSpace[i][i] = width - strings[i-1];
        for(int j=i+1;j<=siz;j++)
            extraSpace[i][j] = extraSpace[i][j-1] - strings[j-1] -1;
    }

    for(int i=1;i<=siz;i++)
    {
        for(int j=i;j<=siz;j++){
            if(extraSpace[i][j] < 0)
                lowestCost[i][j] = INT_MAX;
            else if (j==siz && extraSpace[i][j]>=0)
                lowestCost[i][j] = 0;
            else{
                lowestCost[i][j] = extraSpace[i][j]^2;
            }
        }
    }

    cost[0] = 0;
    for(int i=1;i<=siz;i++)
    {
        cost[i] = INT_MAX;
        for(int j= 1;j<=i;j++)
        {
            if(cost[j-1] != INT_MAX && lowestCost[j][i] != INT_MAX && (cost[j-1] + lowestCost[j][i] < cost[i]))
            {
                cost[i] = cost[j-1] + lowestCost[j][i];
                answer[i] = j;
            }
        }
    }
    printSolution(answer, siz);
}

int main(){
    int strings[] = {3,2,2,5};
    int siz = sizeof(strings)/sizeof(strings[1]);
    int width = 6;

    wordWrap(strings, siz, width);
}


