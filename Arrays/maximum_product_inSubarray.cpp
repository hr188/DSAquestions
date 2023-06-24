// dono taraf se iterate karennge 
// if pre or suff == 0 than 1 
// else pre and suff update and store max ans	
    
    long long maxProduct(vector<int> arr, int n) {
	    long long pre =1 , suff =1;
	    long long ans = INT_MIN;
	    for(int i = 0 ; i< n ; i++){
	        if(pre ==0 ) pre =1 ;
	        if(suff ==0 ) suff = 1;
	        
	        pre = pre *arr[i];
	        suff = suff*arr[n-i-1];
	        ans = max(ans,max(pre,suff));
	     }
	     return ans;
	}