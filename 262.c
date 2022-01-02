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

void Sapxep(int a[], int n){
    int tmp = 0; int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]%2==0 && a[j]%2==0 && a[i]>a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
            if(a[i]%2==1 && a[j]%1==0 && a[i]>a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}



int main(){
    int a[1000]; int n; 
    printf("Nhap so phan tu cua mang: "); scanf("%d",&n);

    nhap(a,n);

    Sapxep(a,n);

    xuat(a,n);


}