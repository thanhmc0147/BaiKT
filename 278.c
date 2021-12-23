#include<stdio.h>

int b[10000]={0}; int c[100];

void nhap(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("Phan tu a[%d]: ",i); scanf("%d",&a[i]);
        b[a[i]]++;
    }
}

void xuat(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("a[%d]: %d \t", i, a[i]); 
    }
}

void xoa_trung(int a[],int n){
    int i;

    for(i=0;i<n;i++){
        if(b[a[i]]>=1){
           c[a[i]]=a[i];
        }
    }
    
    

}

int main(){
    int a[100]; int n;
    printf("Nhap so phan tu: "); scanf("%d",&n);
    
    nhap(a,n);

    xoa_trung(a,n);

   








}

