class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long total;
        long long n=nums.size();
        long long i=0,sum=0;
        for(long long j=0;j<n;j++){
            sum+=nums[j];
            while(i<=j && sum*(j-i+1)>=k){//size=j-i+1
                sum-=nums[i];
                i++;
            }
            total+=(j-i+1);
        }
        return total;
    }
};//arithmetic slices problem is the base for this problem
// two pointer variable sized sliding window approach used, approach decoded by me but implementation is not, implementation my thoughts(optimized approach) was hard.