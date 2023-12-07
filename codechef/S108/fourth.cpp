 
#include <bits/stdc++.h>
 
using namespace std;
 
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
 
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
 
        int tot = 0;
        int rem = 0;
        for(auto e: s)
        {
            if(e != '?')
                tot += (e - '0');
            else
                rem++;
        }
 
        if(rem==1 && s[0]!='?' && tot%9==0)
        {
            cout<<2<<"\n";
            continue;
        }
 
        cout<<1;
        for(int i=1; i<rem; i++)
            cout<<1 - (s[0]=='?') + (i==rem-1 && tot%9==0 && s[0]!='?');
        cout<<"\n";
    }
}