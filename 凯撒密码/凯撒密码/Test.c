#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#define MAX 100 
int main(){
	char C[MAX];   
	char S[MAX];  
	int K=3,i;    
	printf("Enter passage\n");   
	gets(S);   
	for(i=0; S[i]!='\0'; i++)   
	{     
		C[i]=(S[i]-'a'+K)%26+'a';  
	}    C[i]='\0'; 
	for(i=0; S[i]!='\0'; i++)    
	{      
		C[i]=(S[i]-'A'+K)%26+'A'; 
	}  
	C[i]='\0';  
	printf("Password\n%s\n",C); 
	return 0;}


