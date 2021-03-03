#include<stdio.h>
int multnonfact(int ino)
{
  int icnt=0;
  int mult=0;
  for(icnt=1;icnt<=ino;icnt++)
  {
	  if (ino%icnt!=0)
	  {
		 
		 mult=mult+icnt;
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
	
	iret=multnonfact(ivalue);
	printf("addition of non factor %d is:%d",ivalue,iret);
	
	
	return 0;
}