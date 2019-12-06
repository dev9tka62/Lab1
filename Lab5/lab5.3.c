#include <stdio.h>
#include<locale.h>
#include<math.h>

void main(){
	setlocale(LC_ALL,"RUSSIAN");
	int k, i, x, y, b, f;
	printf("Введите сколько будет строк в матрице k =");
	scanf("%d",&k);
	printf("Введите сколько будет столбцов в матрице i =");
	scanf("%d",&i);
	int matr[k][i];
	for(x=0;x<k;x++){					
		for(y=0;y<i;y++){
			printf("Введите элемент [%d,%d]=",x+1,y+1);
			scanf("%d",&matr[x][y]);
		}
	}
	printf("\n");
		for(x=0;x<k;x++){					
		for(y=0;y<i;y++){
			printf(" %5d ",matr[x][y]);
		}
		printf("\n");
	}
	for(x=0;x<k;x++){
		for(y=0,b=-1;y<i,b==-1;y++){
			if(matr[x][y]<0) {
				printf("Строка, которая содержит отрицательный элемент = %d\n",x+1);
				for(b=0;b<k;b++){
				 matr[b][x]=matr[b][x]/2;
				}	
			}
			else break;
			}
		}
		printf("\n");
		for(x=0;x<k;x++){					
		for(y=0;y<i;y++){
			printf("%5d",matr[x][y]);
		}
		printf("\n");
	}
	
}
