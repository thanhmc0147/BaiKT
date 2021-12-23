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
void delete_Max(int A[], int *n, int x)
{
    int i, j;
    
    for(i = *n-1; i >= 0; i--)
    {
        if(A[i] == x)
        { 
            for(j = i; j < *n-1; j++)
            {
                A[j] = A[j+1];
            }
            (*n)--;
            
        }
    }
    
}
 
int main() {

    int a[100]; int n; 
    printf("Nhap so phan tu: "); scanf("%d",&n);

    nhap(a,n);

    int i; int max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]) max = a[i];
    }

    delete_Max(a,&n,max);
    

    xuat(a,n);

}

