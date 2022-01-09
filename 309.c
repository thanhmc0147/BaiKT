#include<stdio.h>

#define MAX 100

void nhap(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("Phan tu a[%d]: ",i); scanf("%d",&a[i]);
    }
}

void xuat(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf(" %d \t", a[i]); 
    }
}

void tao_mang_can(int a[],int b[],int n){
    int i;
    for(i=0;i<n;i++){
        if(i==0){
            b[i]=a[0]+a[1];
        }else if(i==n-1){
            b[i]=a[n-2];
        }else{
            b[i]= a[i-1]+a[i+1];
        }
        
    }

}


int main(){

    int a[MAX]; int b[MAX];

    int n; printf("Nhap so phan tu cua mang: "); scanf("%d",&n);

    nhap(a,n);

    tao_mang_can(a,b,n);

    xuat(b,n);
}

