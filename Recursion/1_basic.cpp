#include <iostream>
using namespace std;
void print(int a ,int n){
    if(n==a){
        return;
    }
    print(a,n+1);
    cout<<n<<" ";
}
int main(){
print(10,1);
}