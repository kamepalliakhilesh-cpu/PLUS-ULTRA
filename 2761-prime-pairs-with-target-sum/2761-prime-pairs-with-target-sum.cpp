class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool> prime(n,true);
        prime[0] = prime[1] = false;
        for (int i=2;i*i<=n;i++){
            if (prime[i]){
                for (int j=i*i;j<n;j+=i){
                    prime[j] = false;
                }
            }
        }
        vector<vector<int>> res;
        for (int x=1;x<=n/2;x++){
            int y = n - x;
            if (prime[x] && prime[y]){
                res.push_back({x,y});
            }
        }
        return res;
    }
};