class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int freq[10] = {};

        // Count frequency of each digit
        for (int d : digits) {
            freq[d]++;
        }

        int count = 0;

        // Choose hundreds digit
        for (int i = 1; i <= 9; i++) {
            if (freq[i] == 0) continue;

            freq[i]--;

            // Choose tens digit
            for (int j = 0; j <= 9; j++) {
                if (freq[j] == 0) continue;

                freq[j]--;

                // Choose units digit (must be even)
                for (int k = 0; k <= 8; k += 2) {
                    if (freq[k] > 0) {
                        count++;
                    }
                }

                freq[j]++;
            }

            freq[i]++;
        }

        return count;
    }
};