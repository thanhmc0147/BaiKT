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

void List_MangCon_dolon2(int a[],int n){
    
   for(int i=0;i<n;i++){
       if(n<3){
        break; //so phan tu nho hon 3 thi k tim duoc
        }
       for(int length = 3+i; length<=n; length++){ //đo số phần tử từ 0 -> n-1 để check tăng dần độ dài mảng
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

     List_MangCon_dolon2(a,n);

    



 }

