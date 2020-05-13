#include<bits/stdc++.h>
using namespace std;

int sum_5(int num)
{   int sum5=0;
    for(int i=5;i<num;i++)
    {
        if(i%5==0)
        {
            sum5=sum5+i;
        }
    }
    return sum5;
}

int sum_3(int num)
{   int sum3=0;
    for(int i=3;i<num;i++)
    {
        if(i%3==0)
        {
            sum3=sum3+i;
        }
    }
    return sum3;
}
int sum_15(int num)
{   int sum15=0;
    for(int i=15;i<num;i++)
    {
        if(i%15==0)
        {
            sum15=sum15+i;
        }
    }
    return sum15;
}


int main()
{   int num;
    cout<<"enter number limit \n";
    cin>>num;
    int k = sum_3(num) + sum_5(num) - sum_15(num);
    cout<<k;
}
