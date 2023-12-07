#include <bits/stdc++.h>
 
using namespace std;
 
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
 
int main()
{
    _test
    {
        int n;
        string s;
        cin>>n>>s;
 
        int f = 0;
 
        for(int i=n-1; i>0; i-=2)
            f |= (s[i]==s[i-1]);
 
        if(f)       cout<<"NO\n";
        else        cout<<"YES\n";
    }
}