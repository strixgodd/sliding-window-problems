//https://leetcode.com/problems/fruit-into-baskets/submissions/1876121928/
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> freq;//empty container with 

        int l=0,maxlength=0;
        int n=fruits.size();
        for(int r=0;r<n;r++){
            freq[fruits[r]]++;
            cout<<freq.size()<<" ";
            while(freq.size()>2){
                freq[fruits[l]]--;
                if(freq[fruits[l]]==0)
                    freq.erase(fruits[l]);
                l++;
            }
            maxlength=max(maxlength,r-l+1);
        }
        return maxlength;
    }
    //find the length of the longest contiguous subarray that contains atmost 2 distinct values.
    //variable sized sliding window
};