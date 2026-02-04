#include <iostream>
#include <vector>
using namespace std;

//linear search
bool linearSearch(int mat[4][3], int rows, int cols, int key) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if(mat[i][j] == key) {
                return true;
            }
        }
    }
    return false;
}

//maximum row sum..
int maxRowSum(int mat[4][3], int rows, int cols) {
    int maxSum = INT8_MIN;

    for(int i=0; i<rows; i++) {
        int rowSum = 0;
        for(int j=0; j<cols; j++) {
            rowSum += mat[i][j];
        }
        maxSum = max(maxSum, rowSum);
    }
    return maxSum;
}

int main() {
    int mat[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int cols = 3;
    // matrix[2][1] = 18;
    // cout << matrix[2][1] << endl;

    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cout << mat[i][j] <<" ";
        }
        cout << endl;
    }
    cout << linearSearch(mat, rows, cols, 9) <<endl;
    cout << maxRowSum(mat, rows, cols) <<endl;

    vector<vector<int>> mat2d = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row2d = mat2d.size(); // mat.size()
    int col2d = mat2d[0].size(); // mat[i].size()
    cout << mat2d[0][1] <<endl;

    return 0;
}