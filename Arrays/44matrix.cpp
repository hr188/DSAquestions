//rotate a matrix by 90 
#include <iostream>
using namespace std ;
void rotate (int arr[][3] , int row , int col){
int  ans[3][3];

for(int i = 0 ; i <row ; i++ ){
    for(int j = 0 ; j< col ; j++){
        ans[j][row -1 -i] = arr[i][j];
    }
}
for(int i = 0 ; i <row ; i++ ){
    for(int j = 0 ; j< col ; j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}

}
int main(){
int arr[3][3] = {
    {1,2,3},
    {1,2,3},
    {1,2,3}
};
rotate(arr,3,3);
}