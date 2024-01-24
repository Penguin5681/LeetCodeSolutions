<!-- 1457. Pseudo-Palindromic Paths in a Binary Tree -->
<?php 
class TreeNode {
    public $val = null;
    public $left = null;
    public $right = null;
    function __construct($val = 0, $left = null, $right = null) {
        $this->val = $val;
        $this->left = $left;
        $this->right = $right;
    }
}

class Solution {
    function pseudoPalindromicPaths($root): int {
        return $this->dfs($root, 0);
    }

    function dfs($node, $pathCount) {
        if ($node === null) 
            return 0;

        $pathCount ^= (1 << $node->val);

        if ($node->left === null && $node->right === null) {
            if (($pathCount & ($pathCount - 1)) === 0) 
                return 1;
            else 
                return 0;
        }

        $leftCount = $this->dfs($node->left, $pathCount);
        $rightCount = $this->dfs($node->right, $pathCount);

        return $leftCount + $rightCount;
    }
}

?>
