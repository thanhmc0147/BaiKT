#include<stdio.h>
#include<stdbool.h>

bool kt_tang(int a[], int n){
    int i;
    for(i=0; i<n; i++){
        if(a[i]>a[i+1]){
            return false;
            break;
        }
    }
    return true;
}

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


int main(){
    int a[100]; int n;
    printf("Nhap so phan tu: "); scanf("%d",&n);
    nhap(a,n);

    if(kt_tang(a,n)){
        printf("Ham co tang");
    }else{
        printf("Ham khong tang");
    }






    return 0;
}