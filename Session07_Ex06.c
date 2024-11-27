#include<stdio.h>

int main() {
	
	int i; // dung de dem trong vong lap for
	int n; // dung de gan gia tri cho kich thuoc mang ban muon nhap
	
	// cho nguoi dung nhap kich thuoc mang ma nguoi dung muon
	printf("Moi ban nhap vao kich thuoc mang ma ban muon: ");
	scanf("%d", &n);
	
	// sau do khai bao va gan gia tri cho mang
	int number[n];
	
	// tien hanh cho nguoi dung nhap gia tri trong mang
	printf("Cac gia tri ma ban muon co trong mang la: \n");
	// ta co the su dung vong lap for
	for(i = 0; i < n; i++){
		printf("Moi ban nhap number[%d] la: \n", i);
		scanf("%d", &number[i]);
	}
	
	for(i = 0; i < n; i++){
		if(number[i] % 2 == 0){
			number[i] += 3;
		} else{
			number[i] += 2;
		}
		
	}
	
	printf("\n\nCac gia tri co trong mang khi thay doi la: \n");
	for(i = 0; i < n; i++){
		printf("number[%d] = %d\n", i, number[i]);
	}
	
	
	//ket thuc chuong trinh 
	return 0;
	
}
