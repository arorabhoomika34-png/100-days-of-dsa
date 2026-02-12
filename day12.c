/*Problem: Write a program to check whether a given matrix is symmetric. A matrix is said to be symmetric if it is a square matrix and is equal to its transpose (i.e., element at position [i][j] is equal to element at position [j][i] for all valid i and j).
Input:
- First line: two integers m and n representing the number of rows and columns
- Next m lines: n integers each representing the elements of the matrix
Output:
- Print "Symmetric Matrix" if the given matrix is symmetric
- Otherwise, print "Not a Symmetric Matrix"
Example:
Input:
3 3
1 2 3
2 4 5
3 5 6
Output:
Symmetric Matrix
Explanation:
The matrix is square (3 × 3) and for every i and j, element[i][j] = element[j][i].*/
#include<stdio.h>

int main() {
    int m,n;
    printf("Enter the no. of rows and columns: ");
    scanf("%d %d",&m,&n);

    if(m != n){
        printf("Matrix is not symmetric");
        return 0;
    }

    int matrix[m][n];

    printf("Enter the elements: ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    int symmetric = 1;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j] != matrix[j][i]){
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric)
        printf("Matrix is Symmetric");
    else
        printf("Matrix is not Symmetric");

    return 0;
}