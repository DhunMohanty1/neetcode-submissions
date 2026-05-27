class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> num;
        for(int i=0;i<nums.size();i++){
            num[nums[i]]++;
        }
        int max=0;
        int n;
        for(auto it: num){
            if(it.second>max){
                max=it.second;
                n=it.first;
            }
        }
        return n;

    }
};