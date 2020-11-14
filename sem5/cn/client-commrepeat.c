#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>
#include<sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
int main()
{
	printf("\nName: Jeevan Kumar Puhan");
	printf("\nRegd: 1841012124 CSE-F\n");
	
	int sockfd,len,n;
	long port;
	char buff[200];
	struct sockaddr_in cliaddr;
	len=sizeof(cliaddr);
	printf("Enter the port number you got from the server side:");
	scanf("%ld",&port);
	cliaddr.sin_family=AF_INET;
	cliaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	cliaddr.sin_port=htons(port);
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	connect(sockfd,(struct sockaddr *)&cliaddr,len);
	while(1) {
		printf("Enter the string for server:");
		scanf("%s",buff);
		//fgets(buff,sizeof buff, stdin);
		n=strlen(buff)+1;
		write(sockfd,buff,sizeof(buff));
		n=read(sockfd,buff,sizeof(buff));
		buff[n]=0;
		printf("client received the message=%s\n\n",buff);
	}
	return 0;
}
