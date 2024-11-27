#include<stdio.h>

int main() {
	
	// cho nguoi dung nhap vao kich thuong mang mong muon
	int i; // de dem trong vong lap for
	int n; // de gan gia tri cho mang
	printf("Moi ban nhap kich thuoc mang mong muon: ");
	scanf("%d", &n);
	int number[n];
	int max, min;
	
	
	// cho nguoi dung nhap vao cac gia tri trong mang
	printf("\n\nCac gia tri trong mang la: \n");
	for(i = 0; i < n; i++){
		printf("Moi ban nhap number[%d] la: \n", i);
		scanf("%d", &number[i]);
}
    min = number[0];
    max = number[0];
    for( i = 0; i < n; i++){
    // tien hanh tim so lon nhat
		
		if(number[i] > max){
			max = number[i];
		}
	   
		if(number[i] < min){
			min = number[i];
		}
}
	
	// in so lon nhat
	printf("So lon nhat co trong mang la: %d\n", max);
	
	// in so nho nhat
	printf("So nho nhat co trong mang la: %d\n", min);
	
	
	
	
	
	// ket thuc chuong trinh 
	return 0;
	
}
