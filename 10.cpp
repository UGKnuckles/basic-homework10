#include<stdio.h>
#include<stdlib.h>
int main(void){
	char name[100];   
	int i=0;
	char option;
	while(true){
		printf("¿é¤J¦r¦ê\n");
		scanf("%s",&name);
		while(i<100&&name[i]>=65){
			if(name[i]>=65&&name[i]<=90){
				name[i]+=32;
				printf("%c",name[i]);
			}
			else if(name[i]>=97&&name[i]<=122){
				name[i]-=32;
				printf("%c",name[i]);
			}
			i++;
		}
		printf("\n");
		i=0;
	} 
	
	
} 

