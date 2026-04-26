class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> buckets(nums.size() + 1);

        for (auto n : nums)
        {
            count[n]++;
        }
        
        for(auto n : count)
        {
            buckets[n.second].push_back(n.first);
        }
        vector<int> ans;
        for(int i = buckets.size() - 1; i > 0; i--)
        {
            if(k == 0) break;
            for(auto n : buckets[i])
            {
                ans.push_back(n);
                k--;
            }
        }

        return ans;        
    }
};
