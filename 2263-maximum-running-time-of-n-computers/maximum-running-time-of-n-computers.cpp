
#include <vector>
#include <numeric>
#include <algorithm>

class Solution {
public:
    long long maxRunTime(int n, std::vector<int>& batteries) {
            // Calculate the total sum of all battery capacities using long long to prevent overflow
                    long long total_sum = 0;
                            for (int b : batteries) {
                                        total_sum += b;
                                                }

                                                        // The possible time range for the answer is from 0 to the maximum possible average time
                                                                long long left = 0, right = total_sum / n;
                                                                        long long ans = 0;

                                                                                while (left <= right) {
                                                                                            long long mid = left + (right - left) / 2;
                                                                                                        // 'mid' is the potential running time for each of the 'n' computers

                                                                                                                    // Calculate the total usable power for this potential time 'mid'
                                                                                                                                long long power_at_mid = 0;
                                                                                                                                            for (int b : batteries) {
                                                                                                                                                            // Each battery can contribute at most 'mid' minutes to the simultaneous run
                                                                                                                                                                            power_at_mid += std::min((long long)b, mid);
                                                                                                                                                                                        }

                                                                                                                                                                                                    // Check if the total usable power is enough to run 'n' computers for 'mid' minutes
                                                                                                                                                                                                                if (power_at_mid >= mid * n) {
                                                                                                                                                                                                                                // If feasible, then 'mid' is a possible answer, try for a longer time
                                                                                                                                                                                                                                                ans = mid;
                                                                                                                                                                                                                                                                left = mid + 1;
                                                                                                                                                                                                                                                                            } else {
                                                                                                                                                                                                                                                                                            // If not feasible, we need to reduce the time
                                                                                                                                                                                                                                                                                                            right = mid - 1;
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                }

                                                                                                                                                                                                                                                                                                                                        return ans;
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                            };
                                                                                                                                                                                                                                                                                                                                            
    
    
  
