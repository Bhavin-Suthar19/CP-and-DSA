/*
🔹 Problem Title: 2419. Longest Subarray With Maximum Bitwise AND
🔗 LeetCode Link: https://leetcode.com/problems/longest-subarray-with-maximum-bitwise-and
⏱️ Time Complexity: O(n)
📦 Space Complexity: O(1)
*/

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
      int ans = 0, n = nums.size(), maxi = 0;
      for(int i=0; i<n; i++){
        if(maxi < nums[i]) ans = 0;
        maxi = max(maxi, nums[i]);
        if(maxi == nums[i]){
            int count = 0;
            while(i < n && nums[i] == maxi){
                count++;
                i++;
            }
            if(i != n){
                i--;
            }
            ans = max(count, ans);
        }

      }  
      return ans;
    }
};
