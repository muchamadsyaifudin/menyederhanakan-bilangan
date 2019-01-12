
#include <stdio.h>
using namespace std;

void pecahan();
main (){
	pecahan();

}
void pecahan(){
	int a,b,l,t;
	printf("masukan pembilang :");
	scanf("%d",&a);
	printf("masukan penyebut:");
	scanf("%d,",&b);
	t = a/b;
	l = a%b;
	if(a%b ==0)
		printf("bilangan (%d%d) \ndi sederhanakan menjadi %d " ,a,b,t);
	else if(a%b != 0)
		printf("bilangan (%d%d)  \ndi sederhanakan menjadi (%d%d) ",a,b,t,l,b);


}
