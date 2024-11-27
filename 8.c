#include <stdio.h>

int main(){
	float money,interest,bank;
	int month,montH;
	printf(" nhap vao tien gui, lai hang thang,so thang:\n");
	scanf("%f %f %d",&bank,&interest,&month);
	montH=month;
	money=bank;
	while(month>0){
		month--;
		money=money*(1+0.01*interest);
	}
	printf("tienlai: %.3f\ntien nhan duoc: %.3f\n trong %d thang",money-bank,money,montH);
	return 0;
}
