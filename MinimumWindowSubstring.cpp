#include <bits/stdc++.h>

using namespace std;

class Solution {

public:

    string minWindow(string s, string t) {

        int m = s.length();

        int n = t.length();

        

        if (m < n) {

            return "";

        }

            

        unordered_map<char, int> tMap;

        for (char c : t) {

            tMap[c]++;

        }

        

        int left = 0, right = 0;  

        int minLen = INT_MAX;

        int minLeft = 0;  

        

        int requiredChars = tMap.size();  

        int formedChars = 0;  

        

        unordered_map<char, int> windowMap;  

        

        while (right < m) {

            char currentChar = s[right];        

            windowMap[currentChar]++;

            if (tMap.count(currentChar) && windowMap[currentChar] == tMap[currentChar]) {

                formedChars++;

            }

            

            while (left <= right && formedChars == requiredChars) {

                if (right - left + 1 < minLen) {

                    minLen = right - left + 1;

                    minLeft = left;

                }

                

                char leftChar = s[left];

                windowMap[leftChar]--;

                if (tMap.count(leftChar) && windowMap[leftChar] < tMap[leftChar]) {

                    formedChars--;

                }

                left++;

            }

            right++;

        }

        

        return (minLen == INT_MAX) ? "" : s.substr(minLeft, minLen);

    }

};

