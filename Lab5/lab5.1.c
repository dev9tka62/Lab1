#include <stdio.h>
#include<locale.h>
#include<math.h>

void main(){
	setlocale(LC_ALL,"RUSSIAN");
	int k, i, j,x,y,b,f,z,a[100],ma=0;
	printf("Введите размер квадратной матрицы k =");
	scanf("%d",&k);
	i=k;
	int matr[k][i];
	for(x=0;x<k;x++){
		for(y=0;y<i;y++){
			printf("Введите элемент матрицы [%d,%d]",x+1,y+1);
			scanf("%d",&matr[x][y]);
		}
	}
	for(x=0;x<i;x++){
		for(y=0;y<k;y++){
			if(matr[y][x]>=0) z++;
			if(z==k){
			for(f=0;f<k;f++){
				b=b+matr[f][x];
			}
			printf("\nСумма элементов столбца %d=%d",x+1,b);
		}
	}
	z=0; b=0;
}
	for(f=0,b=0;f<k;f++){
	for(y=0,x=k-2-f;y<k-1,x>=0;y++,x--){ 				//сумма диагоналей выше побочной диагонали			
		 b=b+fabs(matr[y][x]);	
	} 
	if(b!=0) {a[ma]=b; ma++; 
	}
	b=0;
	for(y=1+f,x=k-1;y<k && x<k;y++,x--){ 				//сумма диагоналей ниже побочной диагонали
		b=b+fabs(matr[y][x]);	
	}
	if(b!=0) {
	a[ma]=b; ma++; 
	}
	b=0;
}
for(x=1,b=a[0];x<ma-1;x++){
	if(b>a[x]) b=a[x];
}
printf("\nМинимум среди сумм модулей диагоналей, параллельных побочой диагонали матрицы = %d",b);
}
