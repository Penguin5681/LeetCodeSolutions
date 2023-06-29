// 49. Group Anagrams

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string, vector<string>> MP;
        for (string st : strs) {
            string t = st;
            sort(t.begin(), t.end());
            MP[t].push_back(st);
        }
        for (auto i : MP)
            ans.push_back(i.second);
        return ans;
    }
};

// Driver Code

int main(void) {
    Solution s;
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> ans = s.groupAnagrams(strs);
    for (auto it : ans) {
        for (auto i : it)
            cout << i << " ";
    }
}