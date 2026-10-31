class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        // Compute the alternating sum: nums[0] - nums[1] + nums[2] - nums[3] + ...
        // This implementation processes elements in pairs (even index i and odd index i+1).
        // For odd-length arrays, the last element (which is at an even index) is added after the loop.
        // Time Complexity: O(n) – each element is visited at most once.
        // Space Complexity: O(1) – only a few integer variables are used.
        // Note: The logic is correct; an alternative concise solution could use a single loop
        // and add/subtract based on index parity, but the current approach meets the optimal complexity.
        int total=0,n=nums.size();
        if(n==1)return nums [0];

        for(int  i=0; i<n; i+=2){
            if(i==n-1)continue;
            total+=(nums[i]-nums[i+1]);
        }
        if(n%2==1) total+= nums[n-1];
        return total;        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna