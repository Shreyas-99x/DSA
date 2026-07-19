class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>a;
        long long ans =1;
        for(int i=1;i<rowIndex+2;i++){

            a.push_back(ans);
            ans = ans*(rowIndex-i + 1);
            ans = ans/i;

            }   
        return a;
    }
};