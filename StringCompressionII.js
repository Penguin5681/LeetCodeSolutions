// 1531. String Compression II

var getLengthOfOptimalCompression = function(s, k) {
    const n = s.length;
    const dp = Array.from({ length: n + 1 }, () => Array(k + 1).fill(-1));

    const getLength = (index, deletionsLeft) => {
        if (deletionsLeft < 0) return Infinity;
        if (index === n) return 0;
        if (dp[index][deletionsLeft] !== -1) return dp[index][deletionsLeft];

        let charCount = 0;
        let delNeeded = 0;
        let minLen = Infinity;

        for (let i = index; i < n; i++) {
            if (s[i] === s[index]) charCount++;
            else delNeeded++;

            if (delNeeded <= deletionsLeft) {
                const lengthIfMerged = (charCount > 1 ? 1 + String(charCount).length : charCount) + getLength(i + 1, deletionsLeft - delNeeded);
                minLen = Math.min(minLen, lengthIfMerged);
            }
        }

        minLen = Math.min(minLen, getLength(index + 1, deletionsLeft - 1));
        dp[index][deletionsLeft] = minLen;
        return minLen;
    };

    const result = getLength(0, k);
    return result === Infinity ? 0 : result;
};