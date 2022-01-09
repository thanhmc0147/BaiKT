#include<stdio.h>

void nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}

int subarray(int a[], int n, int M){
    
    int sum, i, j;

    // khởi động gán sum = a[i]
    for (i = 0; i < n; i++) {
        sum = a[i];

        // chọn các dãy con từ i
        for (j = i + 1; j <= n; j++) {
            if (sum == M) {
                printf("subarray tu a[%d] den a[%d] ",i,j-1);
                return 1;
            }
            if (sum> M || j == n)
                break; //thoát vòng lặp trong để ra vòng ngoài
                
            sum = sum + a[j]; //update tong
        }
    }

    printf("Khong co mang con thoa man");
    return 0;



}



int main(){

    int a[100];

    int n; printf("Nhap so phan tu cua mang: "); scanf("%d",&n);
    int M; printf("Nhap so M: "); scanf("%d",&M);

    nhap(a,n);

    subarray(a,n,M);





}
