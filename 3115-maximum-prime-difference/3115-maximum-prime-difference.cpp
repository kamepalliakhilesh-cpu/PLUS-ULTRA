class Solution {
public:
bool prime(int n){
    if (n < 2){
        return false;
    }
    for (int i=2;i*i<=n;i++){
        if (n%i == 0){
            return false;
        }
    }
    return true;
}
    int maximumPrimeDifference(vector<int>& nums) {
        int n = nums.size();
        int x = 0, y = 0;
        for(int i=0;i<n;i++){
            if (prime(nums[i])){
                x = i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(prime(nums[i])){
                y = i;
                break;
            }
        }
        return y-x;
    }
};