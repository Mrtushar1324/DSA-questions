class Solution {
public:
    bool isfound(vector<vector<int>>& mat, int midrow, int tar){
        int n=mat[0].size();
        int str =0, end =n-1;
        while(str<=end){
            int mid1=str+(end-str)/2;
            if(tar==mat[midrow][mid1]){
                return true;
            }
            else if(tar> mat[midrow][mid1]){
                str=mid1+1;
            }else{
                end=mid1-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(), n=matrix[0].size();
        int str=0, end=m-1;
        while(str<=end){
            int mid=str+(end-str)/2;
            if(target>=matrix[mid][0] && target<=matrix[mid][n-1]){
                return isfound(matrix , mid , target);
            }
            else if(target>matrix[mid][n-1]){
                str=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
};