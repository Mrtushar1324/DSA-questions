class Solution {
public:
    int majorityElement(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int freq =1,ans=arr[0];
        for(int i =1; i<arr.size();i++){
            if(arr[i]==arr[i-1]){
                freq++;
            }
            else{
                freq=1;
                ans=arr[i];
            }
            if(freq>arr.size()/2){
                return ans;
            }
        }
        return ans;
        
        }
        
    };