#include<bits/stdc++.h>

int b[1000], a[1000], c[1000];

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



int main(){
    int n, count = 0; printf("Nhap so phan tu cua mang: "); scanf("%d",&n);

    nhap(a,n);

    for(int i=0;i<n;i++){
        if(a[i]==1){
            b[count] = 1;
            count++;
        }
    }

    for(int i=0;i<n;i++){
        
    }
    
    for(int j=count;j<n;j++){
        for(int i=0;i<n;i++){
            if(a[i]!=1){
                b[j]=a[i];
            }
        }
    }
    xuat(b,n);


}
