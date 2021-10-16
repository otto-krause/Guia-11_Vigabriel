#include<stdio.h>
void suma(int r1,int r2,int r3,int r4,int r5){
	int total;
	total=r1+r2+r3+r4+r5;
	printf("el resultado es: %d",total);
}
int main(){
	int a,b,c,d,e;
	printf("ingrese 5 resistencias: ");

	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    suma(a,b,c,d,e);


}
