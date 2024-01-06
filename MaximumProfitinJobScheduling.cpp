// 1235. Maximum Profit in Job Scheduling

#include <bits/stdc++.h>

using namespace std;

struct Job {
    int startTime;
    int endTime;
    int profit;
};

bool compareJobs(const Job& a, const Job& b) {
    return a.endTime < b.endTime;
}

class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        vector<Job> jobs(n);

        for (int i = 0; i < n; ++i) {
            jobs[i] = {startTime[i], endTime[i], profit[i]};
        }

        sort(jobs.begin(), jobs.end(), compareJobs);

        vector<int> dp(n, 0);
        dp[0] = jobs[0].profit;

        for (int i = 1; i < n; ++i) {
            int latestNonOverlap = findLatestNonOverlap(jobs, i);

            int inclProf = jobs[i].profit + (latestNonOverlap != -1 ? dp[latestNonOverlap] : 0);
            int exclProf = dp[i - 1];

            dp[i] = max(inclProf, exclProf);
        }

        return dp[n - 1];
    }

private:
    int findLatestNonOverlap(const vector<Job>& jobs, int index) {
        int low = 0, high = index - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (jobs[mid].endTime <= jobs[index].startTime) {
                if (jobs[mid + 1].endTime <= jobs[index].startTime) {
                    low = mid + 1;
                } else {
                    return mid;
                }
            } else {
                high = mid - 1;
            }
        }

        return -1; 
    }
};

signed main() {

}