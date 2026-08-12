class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int str=0, end=nums.size()-1;
        if(nums.size()==1){
            return nums[0];
        }
        while(str<=end){
            int mid=str+(end-str)/2;
            if(mid==0 && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }if(mid==nums.size()-1 && nums[mid-2]!=nums[mid-1]){
                return nums[mid];
            }
            if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            if(mid%2==0){
                if(nums[mid-1]==nums[mid]){
                    end=mid-1;
                }else{
                    str=mid+1;
                }
            }
            else{
                if(nums[mid+1]==nums[mid]){
                    end=mid-1;
                }else{
                    str=mid+1;
                }
            }
        }
        return -1;
        
    }
};