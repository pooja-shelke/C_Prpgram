#include<stdio.h>

int Modified(int iNo)
{
	int iResult=0;
	
	if(iNo<=0)
	{
		return 0;
		
	}
	
	int iMask=0X00000240;
	
	iResult=iNo^iMask;
	
	return iResult;
}	
int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number:\n");
	scanf("%d",&iValue);
	
	iRet=Modified(iValue);
	
	printf("Modifeied number is:%d\n",iRet);
	
	return 0;
	
	
}