#include<stdio.h>

void nhap(int a[][100], int m, int n){
    int i,j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("Nhap gia tri cua phan tu a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

}
