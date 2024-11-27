#include<stdio.h>
int main(){
	int number,numberOne,numberTwo,numberThree,numberFour,numberFive,numberOneid,numberTwoid,numberThreeid,numberFourid,numberFiveid,total; 
	printf("moi ban nhap vao 5 so nguyen bat ki \n"); 
	printf("so 1:");
	scanf("%d",&numberOne);
	printf("so 2:");
	scanf("%d",&numberTwo);
	printf("so 3:");
	scanf("%d",&numberThree);
	printf("so 4:");
	scanf("%d",&numberFour);
	printf("so 5:");
	scanf("%d",&numberFive);
	if (numberOne%2==0){
		numberOne=0 ;
	}
	if (numberTwo%2==0){
		numberTwo=0 ;
	}
	if (numberThree%2==0){
		numberThree=0 ;
	}
	if (numberFour%2==0){
		numberFour=0 ;
	}
	if (numberFive%2==0){
		numberFive=0 ;
	}
	total=numberOne+ numberThree+numberTwo+numberFour+numberFive;
	printf("tong cac so le la: %d",total) ;
	return 0; 
} 
