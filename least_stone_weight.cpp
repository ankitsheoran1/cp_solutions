#question link is "https://leetcode.com/contest/weekly-contest-137/problems/last-stone-weight-ii/"  


int lastStoneWeightII(int A[],int n) {
        boolean[] dp = new boolean[1501];
        dp[0] = true;
        int sum = 0;
        for (int i=0;i<n;i++) {
            sum += a;
            for (int j = sum; j >= A[i]; --j)
                dp[j] |= dp[j - A[i]];
        }
        for (int i = sum / 2; i > 0; --i)
            if (dp[i]) return sum - i - i;
        return 0;
    }
