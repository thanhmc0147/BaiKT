#include <stdio.h>

#include <stdlib.h>

#define MAX 100



int a[MAX], b[10]={0};

void nhap(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("Phan tu a[%d]: ",i); scanf("%d",&a[i]);
        if(a[i]<0){
            a[i]=abs(a[i]);
        }
    }
}

void xuat(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf(" %d \t", a[i]); 
    }
}

int tim_Min(int a[], int n){
    int i,j, min;
    for(i=0;i<n;i++){
        if(a[i]!=0){
            min=a[i];
            break;
        }
    }
    for(i=0;i<n;i++){
        if(min>a[i] && a[i]!=0){
            min=a[i];
        }       
    }

    for(j=0;j<n;j++){
        if(min==a[j])
            return j;
            
    }
    
    

}

void dem(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        while(a[i]!=0){
            b[a[i]%10]++;
            a[i]/=10;
        }
    }


}



int main(){
     int n; printf("Nhap so phan tu cua mang: "); scanf("%d",&n);

    nhap(a,n);

    dem(a,n);

    xuat(b,10);

    printf("\n");

    printf("Chu so xuat hien it nhat la %d", tim_Min(b,10));








}