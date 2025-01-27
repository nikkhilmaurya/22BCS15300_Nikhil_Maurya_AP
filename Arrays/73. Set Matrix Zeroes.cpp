class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<pair<int,int>> st;
        int m = matrix.size(), n = matrix[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j]==0){
                    st.insert({i,j});
                }
            }
        }

        for(auto it: st){
            int a = it.first;
            int b = it.second;
            for(int i = 0; i < n; i++){
                matrix[a][i]=0;
            }
            for(int i = 0; i < m; i++){
                matrix[i][b]=0;
            }
        }
    }
};
