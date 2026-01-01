//https://leetcode.com/problems/subarray-product-less-than-k/?envType=problem-list-v2&envId=sliding-window
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,ans=0,prod=1;
        for(int r=0;r<n;r++){
            prod*=nums[r];
            while(l<=r && prod>=k){
                prod=prod/nums[l++];
            }
            ans+=r-l+1;
        }
        return ans;
    }
};
//two pointer appproach , variable sized window