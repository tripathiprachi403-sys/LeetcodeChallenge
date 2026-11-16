class Solution {
public:
    bool isPalindrome(int x) {
        int copy = x;
        int revNum = 0;
        while (x > 0)
        {
            int lastDigit = x % 10;

            //check overflow BEFORE multiplication
            if (revNum > INT_MAX/10 ||
               (revNum == INT_MAX/10 && lastDigit > 7)) {
                return false;
               }

            revNum = (revNum * 10) + lastDigit;


            x = x / 10;
        }
        if (revNum == copy) return true;
        return false;
    }
};