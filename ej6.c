#include<stdio.h>
void octaba(int a){
	int total;
	int b=8;
	total=a/b;
	printf("el resutaldo es: %d",total);
}
int main(){
	int n1;
	printf("ingrese el numero: ");
	scanf("%d",&n1);
    octaba(n1);
}
