Array Subset of another array

string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int> mapping;
    for(int i = 0 ; i< n ; i++){
        mapping[a1[i]]++;
    }
    for(int i = 0 ; i< m ; i++){
        if(!mapping[a2[i]]){
            return "No";
    }else{
        mapping[a2[i]]--;
    }
    }
    return "Yes";
    
    
}