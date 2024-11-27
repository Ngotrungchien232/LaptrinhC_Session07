#include<stdio.h>

int main() {
	
	int i; // dung de dem trong vong lap for
	int n; // dung de gan gia tri cho kich thuoc mang ban muon nhap
	
	// cho nguoi dung nhap kich thuoc mang ma nguoi dung muon
	printf("Moi ban nhap vao kich thuoc mang ma ban muon: ");
	scanf("%d", &n);
	
	// sau do khai bao va gan gia tri cho mang
	int number[n];
	int kiem_tra;
	
	// tien hanh cho nguoi dung nhap gia tri trong mang
	printf("Cac gia tri ma ban muon co trong mang la: \n");
	// ta co the su dung vong lap for
	do{
	for(i = 0; i < n; i++){
		printf("Moi ban nhap number[%d] la: \n", i);
		scanf("%d", &number[i]);
		if(number[i] % 2 != 0){
			kiem_tra == 1;
		} else {
			printf("Moi ban nhap lai so moi\n");
			kiem_tra == 0;
		}
	}
} while(number[i] % 2 != 0);
	
	

	
	
	//ket thuc chuong trinh 
	return 0;
	
}
