#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{   int t; cin>>t;
    while(t--)
    {
        string n; 
        cin>>n;
        char c;
        cin>> c;
        if(n.find(c) % 2 !=0)
            cout<<"YES\n";
        else 
             cout<<"NO\n";


    }
}.\demo.cpp