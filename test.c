#include <stdio.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>
#include <strings.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//test second
int main(int argc,char *argv[])
{
	
/* 	if(argc != 2)
	{
		printf("请输入网络链接!\n");
printf("请输入网络链接!\n");
		return 0;
	}
	 */
	
	
	/* char buf_all[1024]={0};
	strcpy(buf_all,argv[1]);
	
	char bufp[1024]={0};
	char *p=strtok(buf_all,"/");
	printf("%s\n",p);
	strcpy(bufp,p);
	
	char bufc[1024]={0};
	char *c = strpbrk(argv[1], "/");	
	printf("%s\n",c);
	strcpy(bufc,c);
	
	
	
	char buf[1024]={0};
	sprintf(buf,"%s%s",p,bufc);
	printf("%s\n",buf); */
}
