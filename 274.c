#include<stdio.h>

void nhap(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("Phan tu a[%d]: ",i); scanf("%d",&a[i]);
    }
}

void xuat(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("a[%d]: %d \t", i, a[i]); 
    }
}

void xoa_pt_chan(int a[],int *n){
    int i,j;

    for(i = *n-1; i>=0;i--){
        if(a[i]%2==0){
            for(j = i;j < *n-1;j++){
                a[j]=a[j+1];
            }
            (*n)--;
        }

    }

}

int main(){
    int a[100]; int n;
    printf("Nhap so phan tu: "); scanf("%d",&n);
    nhap(a,n);
    xoa_pt_chan(a,&n);

    xuat(a,n);








}