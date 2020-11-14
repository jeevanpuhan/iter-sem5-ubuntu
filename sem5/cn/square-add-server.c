#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<netinet/in.h>

int main()
{	
	printf("\nName: Jeevan Kumar Puhan");
	printf("\nRegd: 1841012124 CSE-F\n");
	
	int listenfd,connfd,len,n;
	int res,ch;
	int buff,s,s1;
	struct sockaddr_in servaddr,cliaddr;
	len=sizeof(servaddr);
	servaddr.sin_family=AF_INET;
	servaddr.sin_addr.s_addr=htonl(INADDR_ANY);
	servaddr.sin_port=htons(0);
	listenfd=socket(AF_INET,SOCK_STREAM,0);
	bind(listenfd,(struct sockaddr *)&servaddr,len);
	getsockname(listenfd,(struct sockaddr *)&servaddr,&len);
	printf("Port for client=%ld\n",(long)ntohs(servaddr.sin_port));
	listen(listenfd,5);
	connfd=accept(listenfd,(struct sockaddr *)&cliaddr,&len);
	
	while(1)
	{
		recv(connfd,&buff,sizeof(buff),0);
		printf("server received the message=%d\n",buff);
		s=buff*buff;
		s1=2*buff;
		// server writes
		send(connfd,&s,sizeof(s),0);
		send(connfd,&s1,sizeof(s1),0);
		
		recv(connfd,&ch,sizeof(ch),0);
		recv(connfd,&res,sizeof(res),0);
		
		switch(ch)
		{
			case 1:
			printf("Sum = %d\n",res);
			break;
			
			case 2:
			printf("Difference = %d\n",res);
			break;
			
			case 3:
			printf("Product = %d\n",res);
			break;
			
			case 4:
			printf("Quotient = %d\n",res);
			break;
			
			case 5:
			printf("Remainder = %d\n",res);
			break;
			
			
		}

		break;
	}
	
	return 0;
}
