#include <stdio.h>
#include <locale.h> 

void main(){
	setlocale(LC_ALL,"RUSSIAN");
	int k, i, x, y, b, f, z=0;
	printf("Введите сколько будет строк k =");
	scanf("%d",&k);
	printf("\nВведите сколько будет столбцов i=");
	scanf("%d",&i);
	int matr[k][i],mas[k],m[k];
	for(x=0;x<k;x++){											
		for(y=0;y<i;y++){
			printf("Введите элемент [%d,%d]",x+1,y+1);
			scanf("%d",&matr[x][y]);
		}
}
for(y=0;y<k;y++){ 										
		for(x=0,b=0;x<i;x++){
			if(matr[y][x]>0 && matr[y][x]%2==0) {
				b+=matr[y][x];
			}
			}
	m[z]=b;
	z++;
}
for(y=0;y<k;y++){
	for(f=0,b=0;f<k;f++){
	if(m[b]>m[f]) b=f;
}
for(x=0;x<i;x++){
	printf(" %d ",matr[b][x]); 
}
printf("\n");
m[b]=m[b]+1000;
}
}
