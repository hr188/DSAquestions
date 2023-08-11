#include <iostream>
#include <algorithm>
using namespace std;
void F1print(int n){
    if(n==1){
        cout<<n;
        return ;
    }
    cout<<n <<" ";
    F1print(n-1);
}



int F2PowerOfTwo(int n ){
    if(n==1){
        return 2;
    }
    return 2*F2PowerOfTwo(n-1);
}

int power(int a , int b ){
    if(b==1){
        return a;
    }

    return a*power(a ,b-1);
}

int fibbonaci(int n ){
    if(n ==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return fibbonaci(n-1) + fibbonaci(n-2);
}
int ClimbStairs(int n ){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return ClimbStairs( n-1) + ClimbStairs( n -2 );
}

void Saydigits(int n , string map[] ){
    
    if(n == 0){
        return ;
    }
    
    int a = n%10;
    n = n/10;
    Saydigits(n,map);
    cout<<map[a] <<" ";
}

bool isSorted(int arr[] , int i , int n ){
    if(i == n-1){
        return true;
    }
    if(arr[i+1] < arr[i]){
        return false;
    }
    else{
        bool ans  = isSorted(arr , i+1 , n );
        return ans;
    }
}
bool linerSearch(int arr[] ,int n  , int key){
    if(n<0){
        return false;
    }
    
    if(arr[n] == key){
        return true;
    }
    
        return linerSearch(arr, n-1 ,key );
    
}
bool binarySearch(int arr[] , int key , int s , int e){
    if(s>e){
        return false;
    }
    int mid = s+ (e-s)/2;
    if(arr[mid]==key){
        return true;
    }
    else if(arr[mid]<key){
        return binarySearch(arr, key , mid+1 , e);
    }
    else{
        return binarySearch(arr, key , s , mid-1 );
    }
}

void reverseS(string& tempo , int s , int e ){
    if(s>=e){
        return;
    }
    swap(tempo[s], tempo[e]);
    reverseS(tempo , s+1 , e-1);

}
int main(){
    F1print(10);
    cout<<endl;
    int n = F2PowerOfTwo(5);
    cout<< n;

    cout<<endl;
    int m = power(5,3);
    cout<<m;
    cout<<endl;

    int ans = fibbonaci(4);
    cout<< ans<<endl;
    cout<<" "<<endl;
    int climb  = ClimbStairs(5);
    cout<<climb<<endl;

    string mapping[10] = {"zero","one" , "two" ,"three" ,"four" ,"five" , "six" ," seven" , "eight" , "nine "};
    Saydigits(345678,mapping);

    cout<<endl;
    int arr[5] ={1,2,3,4,5};
    if(isSorted(arr,0,5)){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"not";
    }

    cout<<endl;
    if(linerSearch(arr,5 ,5)){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    cout<<endl;
    if(binarySearch(arr,5 ,0 ,4)){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    cout<< endl;
    string hr = "Himanshu";
    reverseS(hr , 0 , 7);
    cout<<hr;
}