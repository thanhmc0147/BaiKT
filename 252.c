#include<stdio.h>
void nhap(int a[], int n){
    int i;
    for(i=1;i<=n;i++){
        printf("Phan tu a[%d]: ",i); scanf("%d",&a[i]);
       
    }
}

void xuat(int a[],int n){
    int i;
    printf("Mang vua nhap la: \n");
    for(i=1;i<=n;i++){
        printf("a[%d]: %d \t", i, a[i]); 
    }
}


int check_song(int x[], int n){
    int i, check=1;

    for(int i=1; i<=n; i++){
        if ((x[i]<x[i-1] && x[i]<x[i+1]) || (x[i]>x[i-1] && x[i]>x[i+1])) {
			check = 0;
            break;
		}

    }
    return check;
    
}




int main(){

    int a[1000]; int n;
    printf("Nhap so phan tu cua mang: "); scanf("%d",&n);
    nhap(a,n);
    if(check_song(a,n)){
        printf("Day la mang dang song");
    }else{
        printf("Day k la mang dang song");
    }
  





}