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
	
	int sockfd,len,n,r,r1;
	int add=0,diff=0,mul=0,div=0,rem=0;
	long port;
	int buff;
	struct sockaddr_in cliaddr;
	len=sizeof(cliaddr);
	printf("Enter the port number you got from the server side:");
	scanf("%ld",&port);
	cliaddr.sin_family=AF_INET;
	cliaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	cliaddr.sin_port=htons(port);
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	connect(sockfd,(struct sockaddr *)&cliaddr,len);
	printf("Enter a number for server:");
	scanf("%d",&buff);
	send(sockfd,&buff,sizeof(buff),0);
	recv(sockfd,&r,sizeof(r),0);
	recv(sockfd,&r1,sizeof(r1),0);
	printf("client received the message square number = %d\n",r);
	printf("client received the message twice of number = %d\n",r1);
	
	printf("Choose Arithmetic Operation:\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Remainder\n");
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		add=(r+r1);
		send(sockfd,&ch,sizeof(add),0);
		send(sockfd,&add,sizeof(add),0);
		break;
		
		case 2:
		diff=(r-r1);
		send(sockfd,&ch,sizeof(add),0);
		send(sockfd,&diff,sizeof(diff),0);
		break;
		
		case 3:
		mul=(r*r1);
		send(sockfd,&ch,sizeof(add),0);
		send(sockfd,&mul,sizeof(mul),0);
		break;
		
		case 4:
		div=(r/r1);
		send(sockfd,&ch,sizeof(add),0);
		send(sockfd,&div,sizeof(div),0);
		break;
		
		case 5:
		rem=(r%r1);
		send(sockfd,&ch,sizeof(add),0);
		send(sockfd,&rem,sizeof(rem),0);
		break;
		
		default:
		printf("Wrong Entry\n");
		break;
		
	}
	
	return 0;
}
