class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        int ans=0,maxans=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0)
                ans+=customers[i];
        }
        //first window
        for(int i=0;i<minutes;i++){
            if(grumpy[i])
                ans+=customers[i];
        }
        maxans=max(maxans,ans);
        //consecutive minutes sized fixed window
        for(int i=1;i+minutes-1<n;i++){
            //avoided recomputation in this problem by carefully calulating the fixed size sliding window
            if(grumpy[i-1])
                ans-=customers[i-1];
            if(grumpy[i+minutes-1])
                ans+=customers[i+minutes-1];
            maxans=max(ans,maxans);
        }
        return maxans;
    }
    
};