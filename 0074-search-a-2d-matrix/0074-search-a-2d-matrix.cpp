class Solution {
public:
    bool Inrow(vector<vector<int>>&mat , int tar, int row){
        int n=mat[0].size();
        int str=0, end=n-1;
        while(str<=end){
            int mid=str+(end-str)/2;
            if(tar==mat[row][mid]){
                return true;
            }
            else if(tar>mat[row][mid]){
                str=mid+1;
            }else{
                end=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(), n=matrix[0].size();
        int strtrow=0, endrow=m-1;
        while(strtrow<=endrow){
            int midrow=strtrow+(endrow-strtrow)/2;
            if(target>=matrix[midrow][0] && target<=matrix[midrow][n-1]){
                return Inrow(matrix, target , midrow);
            }
            else if(target>matrix[midrow][n-1]){
                strtrow=midrow+1;
            }
            else{
                endrow=midrow-1;
            }
        }
        return false;
    }
};