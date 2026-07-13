class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        // Copy the original array
        vector<int> temp = arr;

        // Sort the copied array
        sort(temp.begin(), temp.end());

        // Store rank of each unique element
        unordered_map<int, int> rank;
        int currentRank = 1;

        for (int num : temp) {
            // Give rank only if element is not already ranked
            if (rank.find(num) == rank.end()) {
                rank[num] = currentRank;
                currentRank++;
            }
        }

        // Replace each element with its rank
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = rank[arr[i]];
        }

        return arr;
    }
};