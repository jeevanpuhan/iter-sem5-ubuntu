#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include  <netdb.h>
#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
#define MAXLINE 1024

int main(int argc, char **argv)
{
int sockfd;
int n;
int i,j,l;
char temp;
socklen_t len;
char msg[1024], str[1024];
char* m;
struct sockaddr_in servaddr,cliaddr;
sockfd=socket(AF_INET,SOCK_DGRAM,0);
servaddr.sin_family=AF_INET;
servaddr.sin_addr.s_addr=INADDR_ANY;
servaddr.sin_port=htons(5035);
printf("\n\n Binded");
bind(sockfd,(struct sockaddr*)&servaddr,sizeof(servaddr));
printf("\n\nListening");
printf("\n");
while(1)
{
len=sizeof(cliaddr);
n=recvfrom(sockfd,msg,MAXLINE,0,(struct sockaddr*)&cliaddr,&len);
printf("\nClient's Message : %s\n",msg);
l=strlen(msg);
//copy msg
strcpy(str,msg);

// reverse string
for(i=0,j=l-1;i<j;i++,j--)
{
	temp=msg[i];
	msg[i]=msg[j];
	msg[j]=temp;
}
// check palindrome
m="Palindrome";
	int flag = strcmp(msg,str);
	if(flag!=0)
	printf("Palindrome\n");
	else
	printf("Not a Palindrome\n");
	sendto(sockfd,m,n,0,(struct sockaddr*)&cliaddr,len);
}
	return 0;
}
