#include<stdio.h>

void nhap(float a[][100],int m, int n)
{
	int i,j;
	for( i =0; i<=m;i++)
	{
		for ( j=0;j<=n;j++)
		{
			printf("nhap gia tri phan tu a[%f][%f]= ",i,j);
			scanf("%f",&a[i][j]);
		}
	}
}
void xuat(float a[][100], int m, int n)
{
	int i,j;
	for ( i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
			printf("%8.2f",a[i][j]);
			printf("\n");
			
	}
}
float Giatrilonnhat (float a[][100],int m,int n){
	float max=a[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>max);
				max = a[i][j];
			}
		
	}
	return max;
}
	
	int main(){
	float a[100][100];
	int m,n;
	do
	{
		printf("Nhap so dong m: ");
		scanf("%d",&m);
		printf("Nhap so cot n: ");
		scanf("%d",&n);
	}while (m<0 || n<0);
	nhap(a,m,n);
	
	printf("Gia tri lon nhat la: %f", Giatrilonnhat(a,m,n));
}
