#include<stdio.h>

void nhap(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("Phan tu a[%d]: ",i); scanf("%d",&a[i]);
       
    }
}

void xuat(int a[],int n){
    int i;
    printf("Mang vua nhap la: \n");
    for(i=0;i<n;i++){
        printf("a[%d]: %d \t", i, a[i]); 
    }
}

int check_bang(int a[], int n){
    int k=1;
    for(int i=0; i<n-1; i++){
        if(a[i+1]!=a[i]){
            k=0; break;
        }
    }
    return k;
}



int main(){
    int a[1000]; int n;
    printf("Nhap so phan tu cua mang: "); scanf("%d",&n);
    nhap(a,n);

    if(check_bang(a,n)){
        printf("Tat ca cac phan tu cua mang deu bang nhau");
    }else{
        printf("Mang k co tat ca cac phan tu bang nhau");
    }







    




}