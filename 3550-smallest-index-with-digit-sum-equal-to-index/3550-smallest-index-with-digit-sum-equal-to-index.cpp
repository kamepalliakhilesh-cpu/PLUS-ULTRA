class Solution {
public:
int akhi(int n) {
    if (n < 10) {
        return n;
    }
    int s = 0;
    while (n) {
        int a = n%10;
        s += a;
        n /= 10;
    }
    return s;
}
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for (int i=0;i<n;i++) {
            if(akhi(nums[i]) == i) {
                return i;
            }
        }
        return -1;
    }
};