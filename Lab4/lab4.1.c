
#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"RUSSIAN");
	int k, i, b, c, x, n,z;
	printf("Введите количество элементов k=");
	scanf("%d",&k);
	if(k>0){
	int a[k];
	printf("На сколько сдвинуть n = ");
	scanf("%d",&n);
	if(n<=k && n>0){
	for(i=0; i<k; i++) {   
 		printf("a[%d] = ", i);
 		scanf("%d", &a[i]);
 	}
 	for(z=0; z<n; z++){    
		i=a[0];
 		for(c=0;c<k-1;c++){
 		a[c]=a[c+1];
 		
	 }
	 a[k-1]=i;
    }
	for(b=0;b<k;b++){
		printf(" a[%d]=%d",b,a[b]);
	}
}
else printf("\nОшибка");
}
else printf("\nОшибка");
}
