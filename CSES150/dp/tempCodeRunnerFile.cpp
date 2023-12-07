or(int j =1 ; j<=6 ; j++){
            if(i-j>=0){
                dp[i] = dp[i]%MOD + dp[i-j]%MOD;
                dp[i] %= MOD;
            }