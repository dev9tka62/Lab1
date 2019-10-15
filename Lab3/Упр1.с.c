#include <stdlib.h>
int main(int argc, char *argv[]) {
	int m, k=5, d, t=3, v=1, c, h;
	printf("Vvedite m:");
	scanf("%d", &m);
	if(m>50) return 1;
	printf("P9tiryblevix: %d\n", m/k);
	d=m%t;
	printf("Trexryblevix: %d\n", d);
	c=d/v;
	printf("Odnaryblevix: %d\n", c);
	if((m/k)+d+c>=10) printf("Nel`z9 razmen9t`");
	else printf("mohno");
	return 0;
}
