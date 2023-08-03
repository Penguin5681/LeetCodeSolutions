#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1) return s;
        vector<string> list(numRows, "");
        int curr_line = 0;
        bool visited_edge = true;

        for (int i = 0; i < s.length(); ++i) {
            if (curr_line == 0 or curr_line == numRows - 1) 
                visited_edge = !visited_edge;
            list.at(curr_line) += s.at(i);  
            if (visited_edge)
                curr_line--;
            else
                curr_line++;
        }
        string rsl;
        for (int i = 0; i < numRows; ++i) 
            rsl += list.at(i);
        
        return rsl;
    }
};

signed main(void) {

}