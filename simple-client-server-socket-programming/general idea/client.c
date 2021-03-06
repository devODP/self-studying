#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#define DATA "Hello world of socket"
int main(int argc, char *argv[]){
  /* Variables */
  int sock;   
  struct sockaddr_in server;
  struct hostent *hp; 
  int rval = 0;
  int mysock;  
  char buff[1024];
  char str[100];  
  /* Create socket */
  do{ 
    gets(str); 
    sock = socket(AF_INET, SOCK_STREAM, 0);
    if(sock < 0){
      perror("socket failed");
      exit(1);
    } 
    server.sin_family = AF_INET;
    hp = gethostbyname(argv[1]);
    if(hp == 0){
      perror("gethostbyname failed"); 
      close(sock);
      exit(1); 
    }     
    memcpy(&server.sin_addr, hp->h_addr, hp->h_length);
    server.sin_port = htons(5000);
    if(connect(sock, (struct sockaddr *) &server, sizeof(server)) < 0){
      perror("connect failed"); 
      close(sock); 
      exit(1);
    }
    if(send(sock, str, sizeof(str), 0) < 0){
      perror("send failed");
      close(sock);
      exit(1);
    }    
    printf("Sent %s\n", str); 
    if(strcmp(str, "close") == 0){
      close(sock);
      return 0; 
    }
    close(sock);
  }while(1);
  return 0;
}
