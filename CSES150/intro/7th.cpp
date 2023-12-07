#include <iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    for(int i = 1 ; i<= n ; i++){
        long long a1 = i*i , a2 = a1*(a1-1) /2;
        if(i>2){
            a2 -= 4*(i-1)*(i-2);
        }
        cout<<a2<<"\n";
    }

}