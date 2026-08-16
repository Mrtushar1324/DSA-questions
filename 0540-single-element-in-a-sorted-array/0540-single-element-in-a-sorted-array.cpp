class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans=0 ;
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return nums[0];
        }
        int str=0, end=nums.size()-1;
        while(str<=end){
            int mid=str+(end-str)/2;
            if(mid==0 && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            if(mid==nums.size()-1 && nums[mid-2]!=nums[mid-1]){
                return nums[mid];
            }
            if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            if(mid%2==0){
                if(nums[mid]==nums[mid-1]){
                    end=mid-1;
                }else{
                    str=str+1;
                }
            }
            else{
                if(nums[mid]==nums[mid-1]){
                    str=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            ans=nums[mid];
        }
        return ans;
    }
};