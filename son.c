#include<stdio.h>
#include<math.h>
int ngaytrongthang(int thang,int nam){
	switch(thang){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	return 31;
	case 4:
	case 6:
	case 9:
	case 11:
	return 30;
	case 2:
	if(nam%4==0)
		return 29;
	 else
		return 28;
}
}
int ngaythubaonhieutrongnam1(int ngay,int thang,int nam){
	int n = 0;
	for(int i=1;i<thang;i++){
		n+=ngaytrongthang(i,nam);
	}
	n+=ngay;
	return n;
}
int ngaythubaonhieutrongnam2(int ngay,int thang,int nam){
	int n = 0;
	for(int i=1;i<thang;i++){
		n+=ngaytrongthang(i,nam);
	}
	n+=ngay;
	return n;
}
int tinhkhoangcach(int ngay,int thang,int nam){
	int a=ngaythubaonhieutrongnam1( ngay, thang, nam);
	int b=ngaythubaonhieutrongnam2( ngay, thang, nam);
	int s=abs(a-b);
	printf("\nkhoang cach la %d ngay",s);
	return s;
}
int main(){
	int ngay,thang,nam;
	do{
			printf("Nhap ngay thang nam:");scanf("%d%d%d",&ngay,&thang,&nam);
	}while(ngay<1||ngay>31||thang>12||thang<1||nam<1);
	printf("Ngay trong nam:%d",ngaythubaonhieutrongnam1(ngay,thang,nam));
	do{
			printf("\nNhap ngay thang nam:");scanf("%d%d%d",&ngay,&thang,&nam);
	}while(ngay<1||ngay>31||thang>12||thang<1||nam<1);
	printf("\nNgay trong nam:%d",ngaythubaonhieutrongnam2(ngay,thang,nam));
	tinhkhoangcach( ngay, thang, nam);
	
}