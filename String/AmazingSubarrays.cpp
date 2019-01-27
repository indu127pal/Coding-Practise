const int MOD = 10003;

int Solution::solve(string A) {
    int n = A.size();
    int count =0;
    
    for(int i=0;i<n;i++){
        
        if(A[i]=='a' || A[i]=='A' ||
            A[i]=='e' || A[i]=='E' || 
            A[i]=='i' || A[i]=='I' ||
            A[i]=='o' || A[i]=='O' ||
            A[i]=='u' || A[i]=='U')
            {
                count += n-i;
            } 
    }
    return count%MOD;
}
