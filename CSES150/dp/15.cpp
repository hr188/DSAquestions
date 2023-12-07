#include <iostream>
#include <cstring>
#include <limits>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

int solve(int n ){

}
int main(){
    int n ; 
    cin>>n;
    int ans = 0 ;
    n= n*2;
    if(n%2!=0) ans = 0;
    else ans = solve(n);
    cout<<ans <<endl;
}