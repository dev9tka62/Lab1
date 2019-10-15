#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int a, b, c;
	printf("Vvedite storony a:");
	scanf("%d",&a);
	printf("Vvedite storony b:");
	scanf("%d",&b);
	printf("Vvedite storony c:");
	scanf("%d",&c);
	if(a+b>c && a+c>b && b+c>a) printf("Sychestvyet");
	else printf("Ne sychestvyet");
	
	return 0;
}
