#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t1 = 0, t2 = 1, nextTerm = 0, n;
    int sum=0;
    cout << "Enter a positive number: ";
    cin >> n;

    // displays the first two terms which is always 0 and 1
    //cout<<t1<<",";
    nextTerm = t1 + t2;

    while(nextTerm <= n)
    {   if(nextTerm%2==0)
        {
            //summing here since nextTerm is changing in the following line
        sum=sum+t1+t2;
        }
        //cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        
        nextTerm = t1 + t2;
        
    }
    cout<<"\n Sum of Positive even Fib is \t"<<sum;
    return 0;
}