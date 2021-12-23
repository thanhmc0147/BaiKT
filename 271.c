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
 
void xoa_ptu(int a[], int *n, int pos) {
   int i;
   for( i=pos+1;i<*n;i++){
       a[i-1]=a[i];
   }

   *n = *n-1;
}
 
int main() {

    int a[100]; int n; int pos;
    printf("Nhap so phan tu: "); scanf("%d",&n);

    nhap(a,n);

    printf("Nhap vi tri can xoa: "); scanf("%d",&pos);

    xoa_ptu(a,&n,pos);

    xuat(a,n);
   




}