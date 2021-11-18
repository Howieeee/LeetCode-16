class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end()); // -4,-1,1,2  t=1
        int ans = 10000;
        int dif = 10000;
        for(int i=0;i<nums.size()-2;i++){
            //int temp = nums[i];
            for(int j=i+1;j<nums.size()-1;j++){
                //int temp2 = nums[j] + nums[j+1];
                for(int k=j+1;k<nums.size();k++){
                    int sum = nums[i] + nums[j] + nums[k];
                    if(sum == target) //剛好是target
                    return target;
                
                    int diff = abs(sum - target);
                    if(diff <= dif){
                        dif = diff;
                        ans = sum;
                    }
                }
            }
        }
        
        return ans;
    }
};
