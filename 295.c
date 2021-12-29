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


int kt_tang(int a[], int n){
    int i;
    for(i=0; i<n-1; i++){
        if(a[i]>a[i+1]){
            return 0;
            break;
        }
    }
    return 1;
}

void List_MangCon_Tang(int a[],int n){
    for(int i=0;i<n;i++){
       for(int length = 2+i; length<=n; length++){
           if(kt_tang(a,length)==1)
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

     List_MangCon_Tang(a,n);

    



 }

