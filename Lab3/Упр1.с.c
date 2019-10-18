#include<stdio.h>
void main()
{
int n, a,b,c,t=5,y=3,u=1;
while(1) {
printf("meny:\n");
printf("1 – skol`ko 5p\n ");
printf("2 – skol`ko 3p\n ");
printf("3 – skol`ko 1p\n ");
printf("4 – vixod is programmi\n ");
printf("vash vibor?:");
scanf("%d", &n);
switch (n)
{
case 1:
printf("vvedite skol`ko rybley:\n ");
scanf("%d", &a);
if(a>50) printf ("Vvedite znachenie <50\n");
else if(a<50) printf("P9tiryblevix: %d\n ", a/t);
break;
case 2: 
printf("vvedite skol`ko rybley:\n ");
scanf("%d", &b);
if(b>50)printf ("Vvedite znachenie <50\n");
else if(a<50) printf("Trexryblevix: %d\n ", b/y);
break;
case 3: 
printf("vvedite skol`ko rybley:\n");
scanf("%d",&c);
if(c>50) printf ("Vvedite znachenie <50\n");
else if(a<50) printf("Odnoryblevix:%d\n", c/u);
break;
if((a/t) || (b/y) || (c/u) >=10) printf("Nel`z9 razmen9t`");
case 4:
return; break;
default: printf("Nevernoe zna4enie\n");
}
}
}
