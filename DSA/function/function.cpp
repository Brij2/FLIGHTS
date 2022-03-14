#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define f(n) for(int i=1; i<=n; i++)
int fact(int n)
{   int fact = 1;
    f(n)
        {
            fact *= i;
        }
    return fact;
}
int nco(int n, int r)
{
    cout<< fact(n)/(fact(r)*fact(n-r))<<" ";
}
int main()
{
    int n; 
    cin>>n;
    for(int i=0; i<n; i++)
     {  for(int j=0; j<=i; j++)
          {
             nco(i,j);
           
          } 
           cout<<"\n";
    }
    return 0; 
}