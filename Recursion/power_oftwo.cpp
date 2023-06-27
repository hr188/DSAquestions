#include <iostream>
using namespace std;
int power(int pow){
    if(pow==0){
        return 1;
    }
    return power(pow-1);
}
int main(){
int ans = power(3);
cout<<ans;
}