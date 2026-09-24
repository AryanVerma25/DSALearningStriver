#include<iostream>
using namespace std;

vector<vector<int>>rotateMatrix(vector<vector<int>>matrix,int n,int m){
    vector<vector<int>> ans(m, vector<int>(n));
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            ans[j][n-1-i] = matrix[i][j];
        }
    }
    return ans;
}

int main() {
    int n, m;

    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    matrix = rotateMatrix(matrix, n, m);

    cout << "Matrix after rotating:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}