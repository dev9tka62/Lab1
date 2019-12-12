#include <stdio.h>
#include <locale.h> 
#include <malloc.h>
#include <stdlib.h>

void main(){
	setlocale(LC_ALL,"RUSSIAN");
	int k, i, x, y, b, f, z=0, *matr,  j;
	printf("Введите колличество строк матрицы k =");
	scanf("%d",&k);
	printf("\nВведите колличество столбцов матрицы i=");
	scanf("%d",&i);
	int m[k];
	if(!(matr=(int*)malloc(k*i*sizeof(int)))) 
{ puts("Не хватает памяти");
getch();
return;
}
	for(x=0;x<k;x++){											//ввод матрицы
		for(y=0;y<i;y++){
			printf("Введите элемент матрицы [%d,%d]",x+1,y+1);
			scanf("%d",(matr+i*x+y));
		}
}
for(y=0;y<k;y++){ 										//поиск четных положительных чисел строки
		for(x=0,b=0;x<i;x++){
			j=*(matr+i*y+x);
			if(j>0 && j%2==0) {
				b+=j;
			}
			}
	m[z]=b;
	z++;
}
//for(y=0;y<k;y++){                   //вывод характеристик строк
//	printf("m[%d]=%d  ",y,m[y]);
//}
for(y=0;y<k;y++){
	for(f=0,b=0;f<k;f++){
	if(m[b]>m[f]) b=f;
}
for(x=0;x<i;x++){
	printf(" %5d ",*(matr+i*b+x)); 
}
printf("\n");
m[b]=m[b]+1000;
}
free(matr);
}
