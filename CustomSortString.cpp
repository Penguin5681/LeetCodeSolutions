// 791. Custom Sort String

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string customSortString(string order, string s) {
    int charCount[26] = {0};
    for (char c : s)
      charCount[c - 'a']++;

    string result;
    
    for (char c : order) {
      result.append(charCount[c - 'a'], c);
      charCount[c - 'a'] = 0;
    }

    for (char c = 'a'; c <= 'z'; c++) 
      result.append(charCount[c - 'a'], c);

    return result;
  }
};

signed main() {

}