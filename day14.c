 /*Write a program to check whether a given square matrix is an Identity Matrix. An identity matrix is a square matrix in which all diagonal elements are 1 and all non-diagonal elements are 0.

Input:
- First line: integer n representing number of rows and columns
- Next n lines: n integers each representing the matrix elements

Output:
- Print "Identity Matrix" if the matrix satisfies the condition
- Otherwise, print "Not an Identity Matrix"

Example:
Input:
3
1 0 0
0 1 0
0 0 1

Output:
Identity Matrix*/
#include<stdio.h>
int main(){
    int m,n,identity=1;
    printf("Enter the no. of rows and columns: ");
    scanf("%d %d",&m,&n);
    int matrix[m][n];
    printf("Enter the elements: ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j&&matrix[i][i]==1){
                identity=1;
            }
            else if(i!=0&&matrix[i][j]==0){
                identity=1;  
            }
            else{
                identity=0;
            } 
        }
    }
    if(identity){
        printf("Identity matrix");
    }
    return 0;
}