#include<bits/stdc++.h>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1,ans=0;
        int h=0;
        while(l<=r){
            h=(r-l)*min(height[l],height[r]);
            ans=max(ans,h);
            if(height[l]<height[r])
                l++;
            else
                r--;
        }
        return ans;
    }

    //intuition behind moving the pointers -> if we increase l or decrease r then width of the container is bound to decrease, so we must look for a way to increase the height of the container.
};