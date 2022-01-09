#include<stdio.h>

void nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}

int longest_positive(int a[], int n){
    int max = 0; int x=0;
    for(int i = 0; i < n; i++){
        if(a[i]>0){
            x++;
           if(max<x) max=x;
        }else{
            x=0;
        }
    }
    return max;


}


int main(){
    int a[100];

    int n; printf("Nhap so phan tu cua mang: "); scanf("%d",&n);

    nhap(a,n);

    printf("So phan tu duong lien tiep dai nhat la: %d", longest_positive(a,n));





}

