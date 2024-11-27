#include<stdio.h>

int main() {
	
	//tien hanh khai bao mang
	int number[5] = {1, 2, 3, 4, 5};
	int i;
	
	//kich thuoc cua mang 
	int kich_thuoc = sizeof(number) / sizeof(number[0]);
	
    // in ra man hinh do dai cua mang
    printf("do dai cua mang la: %d\n", kich_thuoc);
	
	
	// tien hanh in ra tung phan tu trong mang 
	printf("Cac phan tu trong mang la: \n");
	//neu in thu cong bang printf van duoc nhung neu de bai cho 100 so thi sao in thu cong het dc
	//o day ta co the dung vong lap for
	for (i = 0; i < kich_thuoc; i++) {
		printf("number[%d] = %d\n", i, number[i]);
	}
	
    // ket thuc chuong trinh 
    return 0;
}
