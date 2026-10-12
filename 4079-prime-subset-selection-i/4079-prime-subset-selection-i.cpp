class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        if (n < 2 || s < 2) {
            return {};
        }
        vector<bool> isprime(n+1,true);
        isprime[0] = isprime[1] = false;
        for (int i=2;i*i<=n;++i) {
            if (isprime[i]) {
                for (int j=i+i;j<=n;j+=i) {
                    isprime[j] = false;
                }
            }
        }
        vector<int> result;
        int curr = 0;
        for (int i=2;i<=n;++i) {
            if (isprime[i]) {
                if (curr + i <= s) {
                    result.push_back(i);
                    curr += i;
                }
                else {
                    break;
                }
            }
        }
        return result;
    }
};