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

void List_All_MangCon(int a[],int n){
 
   for(int i=0;i<n;i++){
       for(int length = 1+i; length<=n; length++){
            for(int j=i; j<length; j++){
                    printf("%4d",a[j]);
            }
            printf("\n");

       }


   }
 
  }
 


 int main(){
     int n; printf("Nhap so phan tu cua mang: "); scanf("%d",&n);
     int a[100];
    
    
     nhap(a,n);

     List_All_MangCon(a,n);

    



 }

