#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
            int n = digits.size();
                    
                            // Traverse from the last digit
                                    for (int i = n - 1; i >= 0; --i) {
                                                if (digits[i] < 9) {
                                                                digits[i]++;       // Add 1 and done
                                                                                return digits;
                                                                                            }
                                                                                                        digits[i] = 0;         // Set to 0 and continue carry
                                                                                                                }
                                                                                                                        
                                                                                                                                // If all were 9, insert 1 at the beginning
                                                                                                                                        digits.insert(digits.begin(), 1);
                                                                                                                                                return digits;
                                                                                                                                                    }
                                                                                                                                                    };
                                                                                                                                                    


        
   
