class Solution {
public:
    int hammingWeight(int n) {
        int ans=0;
        vector<int> arr;
        while(n>0){
            int cut=n%2;
            arr.push_back(cut);
            n=n/2;
        }
        reverse(arr.begin(), arr.end());
        for(int i =0;i<arr.size();i++){
            if(arr[i]==1){
                ans=ans+1;
            }
        }
        return ans;

        
    }
};