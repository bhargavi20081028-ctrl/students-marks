#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char*argv[])
{
int m1,m2,m3,m4,m5,total;
float avg;
char name[20];

if(argc !=7)
{
printf("./filename name m1 m2 m3 m4 m5\n");

return 1;
}
strcpy(name,argv[1]);

m1=atoi(argv[2]);
m2=atoi(argv[3]);
m3=atoi(argv[4]);
m4=atoi(argv[5]);
m5=atoi(argv[6]);

total=m1+m2+m3+m4+m5;
avg=total/5.0;

printf("\nSTUDENT DETAILS\n");
printf("Name=%s\n",name);
printf("Mark 1=%d\n",m1);
printf("Mark 2=%d\n",m2);
printf("Mark 3=%d\n",m3);
printf("Mark 4=%d\n",m4);
printf("Mark 5=%d\n",m5);
printf("Total Mark=%d\n",total);
printf("Average=%.2f",avg);

if(m1<35||m2<35||m3<35||m4<35||m5<35)
{
printf("FAIL\n");
}
else
{
printf("PASS\n");
}
if(avg>=90)
{
printf("Grade=A+");
}
else if(avg>=70)
{
printf("Grade=B+");
}
else if(avg>=60)
{
printf("Grade=C+");
}
else
{
printf("Grade=D");
}
return 0;
}
