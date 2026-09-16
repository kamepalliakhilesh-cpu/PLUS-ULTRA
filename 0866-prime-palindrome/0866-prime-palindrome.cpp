class Solution {
public:
bool prime(int n){
    if (n <= 1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if (n%i == 0){
            return false;
        }
    }
    return true;
}
bool palindrome(int n){
    int temp = n,r = 0;
    while (temp > 0){
        r = r*10 + temp%10;
        temp/=10;
    }
    return n == r;
}
    int primePalindrome(int n) {
        while (true){
            string s = to_string(n);
            if (n > 11 && s.length()%2 == 0){
                n = pow(10,s.length());
                continue;
            }
            if (palindrome(n) && prime(n))
            {
                return n;
            }
            n++;
        }
        return -1;
    }
};