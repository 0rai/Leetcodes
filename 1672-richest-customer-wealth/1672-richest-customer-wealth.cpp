class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max =0, curr;
        for(vector<int> person: accounts) {
            curr =0;
            for(int m: person) curr+= m;
            if(curr > max) max = curr;
        }
        return max;
    }
};