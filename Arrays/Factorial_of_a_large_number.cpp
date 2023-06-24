// 1 Initialize an empty vector to store the factorial.
// 2 Push 1 to the vector.
// 3 Iterate from 2 to N.
// 4 Initialize a carry variable.
// 5 Iterate through the vector ans from left to right.
// 6 Multiply the current element of ans with x and add car.
// 7 Store the last digit of the product in the ans vector.
// 8 Update the carry variable to the remaining digits of the product.
// 9 While the carry variable is not zero, push the last digit of the carry variable to the ans vector.
// 10 Reverse the ans vector.
// 11 Return the ans vector.



#include <vector>
#include <iostream>
using namespace std;
    vector<int> factorial(int N){
        vector<int> ans;
        ans.push_back(1);
        
        for(int x = 2 ; x<=N ;x++){
            int car = 0;
            for (int i =0 ; i<ans.size(); i++){
                int val=  ans[i]*x + car;
                ans[i]= val%10;
                car = val /10;
                cout <<"value of i is :" << i <<"  value of car is "<< car <<"  value of ans[i] is  "<<ans[i]<<endl;
            }
            while(car!=0){
                ans.push_back(car%10);
                car = car/10;
            }
            
            cout<<"value of ans after every iteration" <<ans[x]<<endl;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

int main(){
   vector<int> f= factorial(5);
   for(auto i:f){
    cout<<i << " ";
   }

}    