# 1463. Cherry Pickup II

class Solution(object):
    def cherryPickup(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        rows, cols = len(grid), len(grid[0])
        
        dp = [[[-1] * cols for _ in range(cols)] for _ in range(rows)]
        
        def dfs(row, col1, col2):
            if row == rows or col1 < 0 or col1 >= cols or col2 < 0 or col2 >= cols:
                return 0
            
            if dp[row][col1][col2] != -1:
                return dp[row][col1][col2]
            
            cherries = grid[row][col1] + (col1 != col2) * grid[row][col2]
            maxCherries = 0
            for move1 in range(-1, 2):
                for move2 in range(-1, 2):
                    newCol1, newCol2 = col1 + move1, col2 + move2
                    maxCherries = max(maxCherries, cherries + dfs(row + 1, newCol1, newCol2))
            
            dp[row][col1][col2] = maxCherries
            
            return maxCherries
        
        return dfs(0, 0, cols - 1)