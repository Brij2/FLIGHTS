#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{   int t; cin>>t;
    while(t--)
    {   int m=0;
        string n; 
        cin>>n;
        char c;
        cin>> c;
        //(n.find(c)+1)
        int l= n.length();
        for(int f=0; f<l; f++ )
            {
                if(n[f] == c)
                 {  if((f+1)%2!=0)
                      {
                         cout<<"YES\n";
                          m=1;
                         break;
                      }  
                 }
            }
        if(m==0)
             cout<<"NO\n";
    }
    return 0;
}