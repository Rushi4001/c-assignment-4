#include<stdio.h>
int multfact(int ino)
{
  int icnt=0;
  int add1=0;
  int add2=0;
  for(icnt=1;icnt<ino;icnt++)
  {
	  
	  if (ino%icnt==0)
	  {
		 add1=add1+icnt;
		 
	 }
	  
	  else if (ino%icnt!=0)
	  {
		 
		 
		 add2=add2+icnt;
		
	  }
	   
  }
  return add1-add2;
}
int main()
{
	int ivalue=0;
	int iret=0;
	printf("enter the number\n");
	scanf("%d",&ivalue);
	
	iret=multfact(ivalue);
	printf("difference between addition of factors and non factors %d ",iret);
	
	
	return 0;
}