#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int Display(char fname[],char ch)
{
	int fd=0;
	char arr[100];
	int ret=0;
	int iCnt=0,i=0;
	fd=open(fname,O_RDONLY);
	
	if(fd==-1)
	{
		printf("Unable to open");
		return -1;
	}
	
	while((ret=read(fd,arr,sizeof(arr)))!=0)
	{
		for(i=0;i<ret;i++)
		{
			if(arr[i]==ch)
			{
				iCnt++;
			}
		}
	}
    return iCnt;
	close(fd);	
}
int main()
{
	char fname[30];
	int ret=0;
	char ch='\0';
	printf("Enter file name:");
	scanf("%s",fname);
	
	printf("Enter character:");
	scanf(" %c",&ch);
	
	ret=Display(fname,ch);
	
	printf("Number of freaquency of character is is%d",ret);
	
	return 0;
}