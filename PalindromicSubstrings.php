<!-- 647. Palindromic Substrings  -->

<?php

class Solution {

    /**
     * @param String $s
     * @return Integer
     */
    function countSubstrings($s) {
        $n = strlen($s);
        $count = 0;

        $dp = array_fill(0, $n, array_fill(0, $n, false));

        for ($i = 0; $i < $n; $i++) {
            $dp[$i][$i] = true;
            $count++;
        }

        for ($i = 0; $i < $n - 1; $i++) {
            if ($s[$i] == $s[$i + 1]) {
                $dp[$i][$i + 1] = true;
                $count++;
            }
        }

        for ($len = 3; $len <= $n; $len++) {
            for ($start = 0; $start <= $n - $len; $start++) {
                $end = $start + $len - 1;
                if ($dp[$start + 1][$end - 1] && $s[$start] == $s[$end]) {
                    $dp[$start][$end] = true;
                    $count++;
                }
            }
        }

        return $count;
    }
}


?>