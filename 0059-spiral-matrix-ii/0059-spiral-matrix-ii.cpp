class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left = 0, right = n - 1, top = 0, bottom = n - 1;

        vector<vector<int>> ans(n, vector<int>(n, 0));

        int counter = 0;

        while (left <= right && top <= bottom) {
            
            // fill first row and them shift top var to one step down
            for (int i = left; i <= right; i++) {
                ans[top][i] = ++counter;
            }
            top++;
           

             // fill last column of the 2D matrix and shift right var  to  one step left
            for (int j = top; j <= bottom; j++) {
                ans[j][right] = ++counter;
            }
            right--;
             

            // fill the bottomost row from where right is there to leftmost and then shift bottom var to one step towards top
            for (int k = right; k >= left; k--) {
                ans[bottom][k] = ++counter;
            }
            bottom--;


            // now fill the leftmost row between top and bottom and shift left var to step right
            for (int l = bottom; l >= top; l--) {
                ans[l][left] = ++counter;
            }
            left++;
        }

        //and there will be automatically all the [i][j] wouldbe be filled. and when the while loop is terminated just return the 2D vector
       
        return ans;
    }
};