// link -> https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

 int repeatedNTimes(vector<int>& nums) {
        int n = nums.size()/2;
        unordered_map<int,int> m;
        for(int i = 0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int t = 0;
        for(auto i : m){
            if(i.second == n){
                t = i.first;
            }
        }
        return t;
    }
