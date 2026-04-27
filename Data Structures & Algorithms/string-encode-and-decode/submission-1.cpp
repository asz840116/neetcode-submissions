class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(auto s : strs)
        {
            encoded += to_string(s.size()) + '.' + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while(i < s.size())
        {
            int length = 0;
            while(isdigit(s[i]))
            {
                length = length*10 + s[i]-'0';
                i++;
            }
            i++;
            ans.push_back(s.substr(i,length));
            i += length;
        }
        return ans;
    }
};
