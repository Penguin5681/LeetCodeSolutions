class Solution {
private:
    int delR[4] = {0,0,-1,1};
    int delC[4] = {1,-1,0,0};    

    bool isValid(vector<vector<int>>& h, int &maxEffort){
        int n=h.size(),m=h[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,0));
        queue<pair<int,int>>q;

        q.push({0,0});
        vis[0][0]=1;

        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            if(r==n-1 && c==m-1) return 1;

            for(int i=0; i<4; i++){
                int R = r+delR[i];
                int C = c+delC[i];
                if(R>=n || R<0 || C>=m || C<0) continue;
                int effort = abs(h[r][c] - h[R][C]);

                if(effort<=maxEffort && !vis[R][C]){
                    vis[R][C]=1;
                    q.push({R,C});
                }
            }
        }

        return 0;
    }    
public:
    int minimumEffortPath(vector<vector<int>>& h) {
        int n=h.size(),m=h[0].size();

        int s = 0, e = 1e6;
        int ans;

        while(s<=e){
            int mid = s+(e-s)/2;
            if(isValid(h,mid)){
                ans = mid;
                e=mid-1;
            }else s=mid+1;
        }

        return ans;
    }
};
