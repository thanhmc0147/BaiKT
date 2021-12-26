#include<stdio.h>
#include<stdbool.h>

void nhap(int a[], int n){
    int i;
    for(i=1;i<=n;i++){
        printf("Phan tu a[%d]: ",i); scanf("%d",&a[i]);
       
    }
}

void xuat(int a[],int n){
    int i;
    for(i=1;i<=n;i++){
        printf("a[%d]: %d \t", i, a[i]); 
    }
}

int check_csc(int a[],int n){
    int d=a[2]-a[1]; int k=1;
    for(int i=2;i<=n;i++){
        if(a[i]!=a[1]+(i-1)*d){
            k=0;
            break;
        }
		
    }

    return k;
}



int main(){
    int a[100]; int n;
    printf("Nhap so phan tu: "); scanf("%d",&n);
    nhap(a,n);

    if(check_csc(a,n)==1){
        printf("Day cap so cong");
    }else{
        printf("Khong la day cap so");
    }

    
    
}