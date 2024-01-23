// 1239. Maximum Length of a Concatenated String with Unique Characters

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxLength(vector<string>& arr) {
        vector<bitset<26>> bitsets;
        for (const auto& s : arr) {
            bitset<26> bs;
            for (char c : s) {
                bs.set(c - 'a');
            }
            if (bs.count() == s.size()) {
                bitsets.push_back(bs);
            }
        }

        int maxLength = 0;

        for (int mask = 0; mask < (1 << bitsets.size()); ++mask) {
            bitset<26> combined;
            bool valid = true;

            for (int i = 0; i < bitsets.size(); ++i) {
                if (mask & (1 << i)) {
                    if ((combined & bitsets[i]).any()) {
                        valid = false;
                        break;
                    }
                    combined |= bitsets[i];
                }
            }

            if (valid) {
                maxLength = max(maxLength, (int)combined.count());
            }
        }

        return maxLength;
    }
};

signed main() {

}