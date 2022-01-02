#include<stdio.h>

void nhap(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("Phan tu thu %d: ",i); scanf("%d",&a[i]);
       
    }
}


void xuat(int a[],int n){
    int i;
   
    for(i=0;i<n;i++){
        printf("Ptu %d la: %d \t", i, a[i]); 
    }
    printf("\n");
}

void Sap_xep_tang_dan(int a[],int n){
    int tmp = 0; int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

}



int main(){
    int a[1000]; int b[1000]; int m,n; int c[1000];
    printf("Nhap so phan tu cua mang cua mang a: "); 
    
    scanf("%d",&n);

    printf("Nhap so phan tu cua mang b: "); scanf("%d", &m);

    printf("Nhap phan tu mang a: \n");
    
    nhap(a,n);
    
    printf("Nhap phan tu mang b: \n");
    
    nhap(b,m);

    for(int i=0;i<n;i++){
        c[i]=a[i];
    }
    for(int j=n;j<m+n;j++){
        c[j] = b[j-n];
    }

    printf("Cac phan tu cua mang c truoc khi sap xep: \n");
    xuat(c,m+n);

    Sap_xep_tang_dan(c,m+n);

    printf("Cac phan tu cua mang c sau khi sap xep: \n");

    xuat(c,m+n);

    


}