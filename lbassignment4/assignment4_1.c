#include<stdio.h>
int multfact(int ino)
{
  int icnt=0;
  int mult=1;
  for(icnt=1;icnt<=ino/2;icnt++)
  {
	  if (ino%icnt==0)
	  {
		  mult=mult*icnt;
		  printf("%d\n",icnt);
	  }
	  
  }
  return mult;


}
int main()
{
	int ivalue=0;
	int iret=0;
	printf("enter the number\n");
	scanf("%d",&ivalue);
	
	iret=multfact(ivalue);
	printf("multiplication of factor is %d",iret);
	
	return 0;
}