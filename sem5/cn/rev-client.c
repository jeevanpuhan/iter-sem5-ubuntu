#include <arpa/inet.h> 
#include <stdio.h> 
#include <string.h> 
#include <sys/socket.h> 
#include <unistd.h> 


int main(int argc, char* argv[]) 
{ 	
	printf("\nName: Jeevan Kumar Puhan");
	printf("\nRegd: 1841012124 CSE-F\n");
	
	int sock; 
	struct sockaddr_in server; 
	int server_reply[10]; 
	int number[10], i, temp;

	// Create socket 
	sock = socket(AF_INET, SOCK_STREAM, 0); 
	if (sock == -1) { 
		printf("Could not create socket"); 
	} 
	puts("Socket created"); 

	server.sin_addr.s_addr = inet_addr("127.0.0.1"); 
	server.sin_family = AF_INET; 
	server.sin_port = htons(7777); 

	// Connect to remote server 
	if (connect(sock, (struct sockaddr*)&server, sizeof(server)) < 0) { 
		perror("Error! Connection Failed!"); 
		return 1; 
	} 

	puts("Connected\n");
	
	// scan 10 numbers from user to array
	printf("Enter 10 numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&number[i]);
	}

	if (send(sock, &number, 10 * sizeof(int), 0) < 0) { 
		puts("Send failed"); 
		return 1; 
	} 

	// Receive a reply from the server 
	if (recv(sock, &server_reply, 10 * sizeof(int), 0) < 0) { 
		puts("recv failed"); 
		return 0; 
	} 

	puts("Reverse Array :\n");
	printf("[ ");
	for (i = 0; i < 10; i++) { 
		printf("%d, ", server_reply[i]); 
	} 
	printf("]\n");
 
	close(sock); 
	return 0; 
} 

