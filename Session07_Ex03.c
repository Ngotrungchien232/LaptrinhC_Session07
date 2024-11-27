#include<stdio.h>

int main(){
	
	// khai bao mang 
	int number[5];
	int i;
	
	// tien hanh cho nguoi dung gan gia tri tu ban phim ta dung cau lenh for
	printf("Cac phan tu cua mang la: \n");
	for(i = 0; i < 5; i++){
	printf("Moi ban nhap number[%d] : \n", i);
	scanf("%d", &number[i]);
    }
    
    // tao them bien de kiem tra 
    int kiem_tra;
    
    //sau khi da cho nguoi dung gan gia tri vao trong mang
    printf("\n\n Cac cho chan trong mang la: \n");
    // phan biet dau la so chan dau la so le 
    for(i = 0; i <5; i++){
    	if(number[i] % 2 == 0){
    		printf("number[%d] = %d\n", i, number[i]);
    		kiem_tra == 1;
		} else{
			kiem_tra == 0;
		}
		
	}
	
	// phat huy cong dung cua bien kiem tra ta da tao
	if(kiem_tra == 0){
	printf("Mang ban nhap khong co so chan nao ");
	}
	
	
	
	//ket thuc chuong trinh 
	return 0;
}
