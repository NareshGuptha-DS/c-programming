
#include <stdio.h>
int main(){
    int a[10][10], b[10][10], sum[10][10], i, j,column, row;
    
    
    printf("Enter total no. of rows[Between 1 and 10]: ");
    scanf("%d", &row);
    printf("Enter total no. of columns[Between 1 and 10]: ");
    scanf("%d", &column);
    
    printf("Enter First Matrix: \n");
    for (i = 0; i < row; i++)
        for(j = 0; j < column; j++)
            scanf("%d", &a[i][j]);
            
    printf("Enter Second Matrix: \n");
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
            scanf("%d", &b[i][j]);
            
   
    for (i = 0; i < row; i++){
        for (j = 0; j < column; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    
   
    printf("Sum of Two Matrices: \n");
    for (i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
