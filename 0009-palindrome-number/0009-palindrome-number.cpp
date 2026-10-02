class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long long dup=x;
        long long rev=0;
        while(x!=0){
            int lastdigit = x%10;
            rev=(rev*10)+lastdigit;
            x=x/10;
        }
        return rev==dup;
    }
};