class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mpp;
        for(int x:nums)
        mpp[x]++;
        for(int x:nums){
        if(mpp[x]>=2)
        return true;
            
        }
        return false;

    }
};