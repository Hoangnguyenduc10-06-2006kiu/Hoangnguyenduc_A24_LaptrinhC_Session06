#include<stdio.h>
int main(){
	int number;
	int i; 
	printf("moi ban nhap so nguyen bat ki");
	scanf("%d",&number);
	for (i=1;i<=number;i++){
		if(number%i==0){
			printf("%d",i); 
	}
}

	return 0;	 
}
