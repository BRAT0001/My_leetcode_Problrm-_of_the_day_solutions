class Solution {
    public:
        static const long long MOD = 1000000007;
            
                int countTrapezoids(vector<vector<int>>& points) {
                        unordered_map<long long, long long> cnt;
                                cnt.reserve(points.size() * 2);

                                        for (auto &p : points) {
                                                    cnt[p[1]]++;
                                                            }

                                                                    long long sumA = 0;   // sum of ai
                                                                            long long sumSq = 0;  // sum of ai^2

                                                                                    for (auto &kv : cnt) {
                                                                                                long long c = kv.second;
                                                                                                            if (c >= 2) {
                                                                                                                            long long a = (c * (c - 1) / 2) % MOD;  // C(c,2)

                                                                                                                                            sumA = (sumA + a) % MOD;
                                                                                                                                                            sumSq = (sumSq + (a * a) % MOD) % MOD;
                                                                                                                                                                        }
                                                                                                                                                                                }

                                                                                                                                                                                        long long ans = ( (sumA * sumA) % MOD - sumSq + MOD ) % MOD;

                                                                                                                                                                                                // multiply by inv(2) mod M
                                                                                                                                                                                                        long long inv2 = 500000004;  
                                                                                                                                                                                                                ans = (ans * inv2) % MOD;

                                                                                                                                                                                                                        return (int)ans;
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                            };




        
  
