#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"RUSSIAN");
int m, s, a, b, c;
printf("Введите сумму руб. 10<m<50 m = ");
scanf("%d", &m);
	 for(a=0;a<=10 && s<m;a=a+1){
	 	for(b=0; b<=10-a&&s<m; b++){
	 		for(c=0; c<=10-a-b && s<m; c++){
	 			s=5*a+3*b+c;
			 }
		 }
		}
if( s==m && a+b+c-3==10)
printf("\nМожно пятируб =%d трехруб =%d руб =%d s=%d",a-1,b-1,c-1,s);
else printf("\nНельзя");
}
