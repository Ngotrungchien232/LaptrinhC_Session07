#include<stdio.h>

int main(){
	
	int n; //bien de luu gia tri mang 
	int i; // bien de tien hanh dem trong vong lap for
	
	//yeu cau nguoi dung nhap xem mang do chua bao nhieu phan tu
	printf("Moi ban nhap gia tri cho mang: \n");
	scanf("%d", &n);
	
	// khai bao mang voi so phan tu nhap vao
	int number[n];
	
	//tien hanh cho nguoi dung nhap vao voi so gia tri mang da nhap truoc do
	for(i = 0; i < n; i++){
		printf("Moi ban nhap number[%d] la: \n",i);
		scanf("%d", &number[i]);
	}

	
	
	
	printf("\n\nCac phan tu co trong mang la: \n");
	for(i = 0; i < n; i++){
		printf("number[%d] = %d\n", i, number[i]);
	}
	
	
	//ket thuc chuong trinh 
	return 0;
	
}
