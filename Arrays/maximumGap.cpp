int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    if(n<=1) 
        return 0;
        
    vector<int> v1(n, 0), v2(n, 0);
    
    v1[0] = A[0];
    for(int i = 1 ; i < n; i++){
        v1[i] = min(v1[i-1], A[i]);
    }
    
    // Fill the second array with maximum from the right
    v2[n-1] = A[n-1];
    for(int i = n-2 ; i >= 0 ; i--)
    v2[i] = max(v2[i+1], A[i]);
    
    int i=0, j=0;
    int ans = -1;
    
    while(j<n && i<n){
        if(v2[j] >= v1[i]){
            if(j-i > ans){
                ans = j-i;
            }
            j = j + 1;
        }else i = i + 1;
    }
    return ans;
}



//  alternate solution
// Example :

// A : [3 5 4 2]

// Output : 2 
// for the pair (3, 4)



int Solution::maximumGap(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
   // if(n==1) return 0;
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++){
        v.push_back(make_pair(A[i],i));
    }
    sort(v.begin(),v.end());
    int ans=0;
    int rmax=v[n-1].second;
    for(int i=n-2;i>=0;i--){
        ans=max(ans,rmax-v[i].second);
        rmax=max(rmax,v[i].second);
    }
    return ans;
}