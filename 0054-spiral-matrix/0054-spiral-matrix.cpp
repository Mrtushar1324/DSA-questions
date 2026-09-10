class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(), n=matrix[0].size();
        int strow=0,  endrow=m-1;
        int strcol=0,  endcol=n-1;
        vector<int> ans;
        while(strow<=endrow && strcol<=endcol){
            //top:-
            for(int j=strcol; j<=endcol; j++){
                ans.push_back(matrix[strow][j]);
            }

            //right:-
            for(int i=strow+1;i<=endrow;i++){
                ans.push_back(matrix[i][endcol]);
            }

            //bottom:-
            for(int j=endcol-1; j>=strcol; j--){
                if(strow==endrow){
                    break;
                }
                ans.push_back(matrix[endrow][j]);
            }
            //left:-
            for(int i=endrow-1;i>strow; i--){
                if(strcol==endcol){
                    break;
                }
                ans.push_back(matrix[i][strcol]);
            }
            strow++;
            endrow--;
            strcol++;
            endcol--;


        }
        return ans;
    }
};