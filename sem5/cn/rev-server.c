#include <arpa/inet.h> 
#include <stdio.h> 
#include <string.h> 
#include <sys/socket.h> 
#include <unistd.h> 

void reverse(int[], int);
void display(int[], int); 

// Driver code 
int main(int argc, char* argv[]) 
{ 
	printf("\nName: Jeevan Kumar Puhan");
	printf("\nRegd: 1841012124 CSE-F\n");
	
	int socket_desc, client_sock, c, read_size; 
	struct sockaddr_in server, client; 
	int message[10], i; 

	// Create socket 
	socket_desc = socket(AF_INET, SOCK_STREAM, 0); 
	if (socket_desc == -1) { 
		printf("Could not create socket"); 
	} 
	puts("Socket created"); 

	 
	server.sin_family = AF_INET; 
	server.sin_addr.s_addr = INADDR_ANY; 
	server.sin_port = htons(7777); 

	if (bind(socket_desc, (struct sockaddr*)&server, sizeof(server)) < 0) { 

		// print the error message 
		perror("bind failed. Error"); 
		return 1; 
	} 
	puts("bind done"); 

	listen(socket_desc, 3); 

	puts("waiting connection..."); 
	c = sizeof(struct sockaddr_in); 

	// accept connection
	client_sock = accept(socket_desc, (struct sockaddr*)&client, (socklen_t*)&c); 

	if (client_sock < 0) { 
		perror("accept failed"); 
		return 1; 
	} 

	puts("accepted..."); 

	// Receive message
	while ((read_size = recv(client_sock, &message, 10 * sizeof(int), 0)) > 0) { 
		
		printf("Array Received: \n");
		display(message, 10);
		
		reverse(message, 10); 
		
		printf("Reverse Array: \n");
		display(message, 10);

		write(client_sock, &message, 10 * sizeof(int)); 
	} 

	if (read_size == 0) { 
		puts("Client disconnected"); 
	} 
	else if (read_size == -1) { 
		perror("recv failed"); 
	} 

	return 0; 
} 

// Reverse Array function
void reverse(int list[], int n) 
{ 
	int arr[n],i;
	
	for(i=0; i<n; i++)
	{
		arr[i] = list[n-i-1];
	}
	
	for(i=0; i<n; i++)
	{
		list[i] = arr[i];
	}
	
}

// Display array received from client
void display(int list[], int n)
{
	int i;
	printf("\n[ ");
	for(i=0; i<n; i++)
	{
		printf("%d, ", list[i]);
	}
	printf("]\n");
}

