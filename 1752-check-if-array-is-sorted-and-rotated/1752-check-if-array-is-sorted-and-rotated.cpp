class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr = nums;
        sort(arr.begin(), arr.end());

        for(int i=0; i<n; i++)
        arr.push_back(arr[i]);

        for(int i=0; i<n; i++){
            vector<int> sub(arr.begin()+i, arr.begin()+i+n+1);
            int isSame=1;
            for(int i=0; i<n; i++){
                if(nums[i] != sub[i]){
                    isSame = 0;
                    break;
                }
            }
            if(isSame)
            return true;
        }
        return false;
    }
};