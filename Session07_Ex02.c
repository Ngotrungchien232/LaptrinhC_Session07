#include<stdio.h>

int main() {
	
	// dau tien chung ta phai khai bao mang da 
	int number[5];
	int i;
	
	
	// sau do chung ta se khai bao gia tri cho mang 
	
	    /*// cach 1: ta co the khai bao mang theo kieu thu cong nhu sau
	    number[0] = 1;
	    number[1] = 2;
	    number[2] = 3;
	    number[3] = 4;
	    number[4] = 5;
	    //han che dung cach nay vi neu number[100] thi co ma nhap den tet*/
	    
	    //cach 2: su dung vong lap for
	    for (i = 0; i < 5; i++) {
        number[i] = i + 1;
    }
	    // de co the su dung vong lap for ta can tinh duoc kich thuoc cua mang
	    int kich_thuoc = sizeof(number) / sizeof(number[0]);
	    for(i = 0; i < kich_thuoc; i++){
	    	printf("number[%d] la: %d\n", i, number[i]);
		}
		
		//ket thuc chuong trinh
		return 0;
	    
}
