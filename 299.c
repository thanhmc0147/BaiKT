#include<stdio.h>

 int b[100], length_b; // tạo mảng để chứa mảng con dương

  int a[100];

void nhap(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("Phan tu a[%d]: ",i); scanf("%d",&a[i]);
    }
}

void xuat(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf(" %d \t", a[i]); 
    }
}


int kt_duong(int a[], int n){
    int i;
    for(i=0; i<n; i++){
        if(a[i]<=0){
            return 0;
        }
    }
    return 1;
}



void List_MangCon_Duong(int a[],int n){
    for(int i=0;i<n;i++){
       for(int length = 2+i; length<=n; length++){

           length_b = 0;
            for(int j = i; j < length; j++)
            {
                b[length_b] = a[j];
                length_b++;
            }
            if(kt_duong(b,length_b)==1){
                xuat(b,length_b);
                printf("\n");
            }
            
       }
    }
}


   int main(){

    
     int n; printf("Nhap so phan tu cua mang: "); scanf("%d",&n);
    

    nhap(a,n);

    List_MangCon_Duong(a,n);

    



 }

