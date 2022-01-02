#include <stdio.h>
void indapan(int k) {
	if(k==0) {
		printf("mang co bang nhau");
	}
	else {
		printf("mang khong bang nhau");
	}
}

int main () {
	int y[8]={1,2,3,4,5,6,7,8}; 
	int i;
	int k = 1;
	for (i=0; i<=5; i++) { 
	 if (y[i]==y[i+1]) {
	 	k=0;
	 	break;
	 	
	 	}
}
	indapan(k);
	}
