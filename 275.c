#include<stdio.h>
#include<math.h>

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

void xoa_pt_chinh_phuong(int a[],int *n){
    int i,j;

    for(i = *n-1; i>=0;i--){
        if((int)sqrt(a[i])*(int)sqrt(a[i])==a[i]){
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
    xoa_pt_chinh_phuong(a,&n);

    xuat(a,n);








}