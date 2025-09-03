class Solution {
public:
    bool isPerfectSquare(int num) {        if(num == 1) return true;  // handle edge case
            for(int i = 1; i <= num/2; i++) {
                        if(1LL * i * i == num) return true;  // use long long to avoid overflow
                                }
                                        return false;
                                            }
        
    };
