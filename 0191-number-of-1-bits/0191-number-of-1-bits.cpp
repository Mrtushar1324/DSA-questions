class Solution {
public:
    int hammingWeight(int n) {
        vector<int> arr;
        int ans=0;
        while(n>0){
            int cut=n%2;
            n=n/2;
            arr.push_back(cut);
        }
        reverse(arr.begin(),arr.end());
        for(int i =0; i<=arr.size()-1;i++){
            if(arr[i]==1){
                ans++;
            }
        }
        return ans;
        
    }
};