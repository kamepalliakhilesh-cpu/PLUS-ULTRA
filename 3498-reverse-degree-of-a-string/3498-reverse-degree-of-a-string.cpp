class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0, n = s.length();
        for (int i=0;i<n;i++) {
            sum += (i+1)*(int('z') - int(s[i]) + 1);
        }
        return sum;
    }
};