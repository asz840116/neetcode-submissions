class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> buckets(nums.size() + 1);

        for (int n : nums) {
            count[n] ++;
        }

        for(auto &p : count){
            buckets[p.second].push_back(p.first);
        }
        vector <int> res;
        for(int i = buckets.size() - 1; i > 0; i--){
            cout << "i = " << i << endl;
            for(auto n : buckets[i]){
                res.push_back(n);
                k--;
                if(k == 0)return res;
            }
            
        } 

        return res;
    }
};