// C++ program to print all prime factors  
#include <bits/stdc++.h> 
using namespace std; 
  
void largestpf(long long int n)  
{  
    // Print the number of 2s that divide n  
    while (n % 2 == 0)  
    {  
       // cout << 2 << " ";  
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            //cout << i << " ";  
            n = n/i;  
        }  
    }  
  

    cout<<n;
}  
  
/* Driver code */
int main()  
{  
    long long int n = 600851475143;  
    largestpf(n);  
    return 0;  
}  