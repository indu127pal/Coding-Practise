vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> ans(A, vector<int>(A));
    
    if(A==0)
        return ans;
    
    int L=0;
    int R=A-1;
    int T=0;
    int B=A-1;
    int n =1;
    
    while(n<=(A*A)){
        for(int i=L;i<=R;i++){
            ans[T][i] = n;
            n++;
        }
        T++;
        
        for(int i=T;i<=B;i++){
            ans[i][R] = n;
            n++;
        }
        R--;
        
        for(int i=R;i>=L;i--){
            ans[B][i] = n;
            n++;
        }
        B--;
        
        for(int i=B;i>=T;i--){
            ans[i][L] = n;
            n++;
        }
        L++;
    }
    return ans;
}
