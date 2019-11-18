#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"RUSSIAN");
	int k, i, b, x=0, z=0;
	printf("Введите число элементов массива k=");
	scanf("%d",&k);
	if(k>0){
		z=k;
	int a[k],mas[k];
	for(i=0; i<k; i++) {     
 		printf("a[%d] = ", i);
 		scanf("%d", &a[i]);
 	}
 	for(i=0;i<k;i++){
 		mas[i]=a[i];
	 }
 	for(i=0;i<k-1;i++){
 		for(b=i+1;b<k;b++) {
 		if(a[i]==a[b]){
			 mas[b]=a[b]+1;
			 }
		 }
	 }
	 for(i=0;i<k;i++){
	 	if(a[i]!=mas[i]) z--;
	 }
	printf("\nРазличных элеметов в массиве %d",z);
}
else printf("Ошибка");
}
