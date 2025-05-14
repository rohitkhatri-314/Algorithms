#include <bits/stdc++.h>
using namespace std;

using matrix =vector<vector<int>>;

matrix matrixMultiplication(matrix&A, matrix&B){
    int m=A.size();
    int n=A[0].size(); // n= no. of columns in A as well as no. of rows in B (validity for matrix multiplication)
    int q=B[0].size();
    matrix res(m,vector<int>(q,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<n;k++){
                res[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    return res;
}
matrix matrixExponentiation(matrix& A, int exp){
    int n=A.size();
    matrix res(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        res[i][i]=1; // make res an identity matrix
    }
    while(exp>0){
        if(exp%2==1){
            res=matrixMultiplication(res,A);
        }
        A=matrixMultiplication(A,A);
        exp=exp/2;
    }
    return res;
}

int main(){
    matrix A = {
        {1, 1},
        {1, 0}
    };

    int exp = 5;
    matrix result = matrixExponentiation(A, exp);
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}