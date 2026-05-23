class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int peak=0;
        for(int i=1; i<n; i++){
            if(nums[i-1] > nums[i])
            peak++;
        }
        if(!peak)
        return true;

        if(peak==1 and nums[n-1]<=nums[0])
        return true;

        return false;
    }
};