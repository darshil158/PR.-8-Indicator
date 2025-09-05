#include <stdio.h>
#include <conio.h>
int cube(int *a,int r,int c) {
    printf("Cubes of all elements in the 2D array:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int val = *(a+ i*c +j);
            printf("%d ", val * val * val);
        }
        printf("\n");
    }
}
int main() 
{
    int r,c;
    printf("Enter the no. of rows :- ");
    scanf("%d",&r);
    printf("Enter the no. of columns :- ");
    scanf("%d",&c);
    int a[r][c];
    printf("\nEnter Elements of Array A :- \n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Array A :- \n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    cube(&a[0][0],r,c);
    return 0;
}