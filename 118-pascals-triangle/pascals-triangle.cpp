class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;      // Stores the complete Pascal's Triangle

        for (int row = 1; row <= numRows; row++) {   // Generate each row

            long long value = 1;      // First element of every row is 1
            vector<int> ansRow;       // Stores the current row

            ansRow.push_back(1);      // Insert the first element

            for (int col = 1; col < row; col++) {    // Generate remaining elements
                value = value * (row - col);         // Calculate next value
                value = value / col;
                ansRow.push_back(value);             // Add value to current row
            }

            ans.push_back(ansRow);    // Store current row in the answer
        }

        return ans;                   // Return the complete triangle
    }
};