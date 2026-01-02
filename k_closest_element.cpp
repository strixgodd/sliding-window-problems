
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        int n=arr.size();
        int l=0,r=n-k,mid=0;
        //finding the left edge of the window through this binary search
        while(l<r){
            mid=l+(r-l)/2;//mid gives us the left edge of the window
            if(x-arr[mid]>arr[mid+k]-x)//curr window: [arr[mid], ..., arr[mid + k - 1]]
            //next possible window: [arr[mid+1], ..., arr[mid + k]]
            // diff between curr window and next possible window is arr[mid] and arr[mid+k]
                l=mid+1;
            else
                r=mid;
        }
        //after binsearch l points to the left edge of the window.
        for(int i=l;i<=l+k-1;i++){
            ans.push_back(arr[i]);
        }
        return ans;
        
    }
};

//SORTED-> binary search hint
//bin search to find the left edge of the window