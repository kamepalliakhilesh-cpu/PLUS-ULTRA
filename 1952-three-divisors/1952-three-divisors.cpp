class Solution {
public:
    bool isThree(int n) {
        if (n<=1)
        {
            return false;
        }
        int divisors = 0;
        for(int i=1;i<=n;i++)
        {
            if (n%i==0)
            {
                divisors++;
            }
        }
        return divisors==3;
    }
};