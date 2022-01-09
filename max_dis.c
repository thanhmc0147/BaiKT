#include<stdio.h>
#include<stdlib.h>


void nhap(int a[], int n){
    for(int i=0; i<n; i++){
        printf("Nhap phan tu a[%d]: ",i); scanf("%d",&a[i]);
    }

}

void xuat(int a[],int n){
    for(int i=0; i<n; i++){
        printf("Xuat phan tu a[%d]: %d",i,a[i]);
    }
}

int find_min(int a[],int n){
    int min = a[0];
    for(int i=0; i<n; i++){
        if(min>a[i]){
            min = a[i];
        }
    }
    return min;


}

int find_max_dis(int a[], int n){
    int S = abs(a[1]-a[0]); int max ;
    for(int i=1; i<n; i++){
        max = abs(a[i+1]-a[i]);
        if(S<max){
            S=max;
        }
    }

    return S;

}

int main(){
    int a[1001]; int n;
    printf("Nhap so phan tu cua mang: "); scanf("%d",&n);
    
    nhap(a,n); 

    printf("Khoang cach lon nhat giua 2 phan tu lien tiep la: %d", find_max_dis(a,n));




}


