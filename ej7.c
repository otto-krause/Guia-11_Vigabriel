#include<stdio.h>
void num(int n1, int n2){
	if(n1>n2){
		printf("el primer numero es mayor al segundo");
	}
	else if(n1<n2){
		printf("el segundo numero es mayor al primero");
	}
	else{
		printf("los numeros son iguales");
	}
}

int main(){
	int a,b;
	
	printf("ingrese dos numeros: ");
	scanf("%d",&a);
	scanf("%d",&b);
	
	num(a,b);
}
