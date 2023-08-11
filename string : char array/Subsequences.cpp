#include <iostream>
using namespace std;
void solve (vector<string>&ans ,string temp ,int index , string s){
    if(index>= s.length()){
        ans.push_back(temp);
        return;
    }

    //exlude ki call
    solve(ans ,temp, index+1 ,s);
    //include ki call
    char element = s[index];
    temp.push_back(element);
    solve(ans ,temp, index+1 ,s);
}

int main(){
    string s = "abc"; //ans should be “a” , “b” , “c” , “ab” , “bc” , “ac”, “abc”
    string temp ="";
    vector<string>ans;
    solve(ans ,temp, 0 ,s);

    for(auto i : ans){
        cout<<i <<endl;
    }
}