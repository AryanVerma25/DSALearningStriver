#include<iostream>
using namespace std;

void markRow(vector<vector<int>>&matrix,int i,int m){
    for(int j =0;j<m;j++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        } 
    }
}

void markCol(vector<vector<int>>&matrix,int j,int n){
    for(int i=0;i<n;i++){
        if(matrix[i][j]!=0){
            matrix[i][j] = -1;
        }
    }
}

vector<vector<int>>zeroMatrix(vector<vector<int>>matrix,int n , int m){
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(matrix[i][j]==0){
                markRow(matrix,i,m);
                markCol(matrix,j,n);
                
            }
        }
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(matrix[i][j]==-1){
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
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

    matrix = zeroMatrix(matrix, n, m);

    cout << "Matrix after setting zeroes:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}