class Solution {
public:
    int findGCD(vector<int>& nums) {
        int Gmax = *max_element(nums.begin(), nums.end());
        int Gmin = *min_element(nums.begin(), nums.end());

        return gcd(Gmax, Gmin);
    }
};