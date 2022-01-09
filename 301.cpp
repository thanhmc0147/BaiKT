#include<bits/stdc++.h>
#include<set>

using namespace std;

void nhap(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("Phan tu thu %d cua mang: ",i); scanf("%d",&a[i]);
    }
}

int a[100], b[100]; 


int main(){

    int m,n;
    
    unordered_set<int> s;

    printf("Nhap so phan tu cua mang a: "); scanf("%d",&n);

    printf("Nhap so phan tu cua mang b: "); scanf("%d",&m);

    printf("Nhap mang a: \n");
    nhap(a,n);

    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    int count = s.size();
    
    printf("Nhap mang b: \n");
    nhap(b,m);


    for(int i = 0 ; i<m;i++){
        s.insert(b[i]);
    }

    if(s.size()==count){
        printf("Mang b la mang con cua a");
    }else{
        printf("No");
    }


}



