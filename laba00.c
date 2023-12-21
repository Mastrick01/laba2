#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "laba111.h"
void search(clothes*arr,int n){
	FILE*fp=fopen("file.txt","r");
	if(!fp) return;
	int flt;
	printf("1-name,2-price,3-material\n");
	scanf("%d",&flt);
switch(flt){
	case 1:{
		char s1[40];
		int f1=0;
		printf("name - ");
		scanf("%s",s1);
		for(int i=0;i<n;i++){
			if(strcmp(s1,arr[i].name)==0){
				printf("found - %s %d %s\n", arr[i].name,arr[i].price,arr[i].material);
				f1=1;
				} else printf("not found\n");
			}
		break;
		}
	case 2:{
		int s2;
		int f2=0;
		printf("price - ");
		scanf("%d",&s2);
		for(int i=0;i<n;i++){
			if(s2=arr[i].price){
				printf("found - %s %d %s\n",arr[i].name,arr[i].price,arr[i].material);
				f2=1;
				} else printf("not found\n");
			}
		break;
		}
	case 3:{
		char s3[40];
		int f3=0;
		printf("material- ");
		scanf("%s",s3);
		for(int i=0;i<n;i++){
			if(strcmp(s3,arr[i].material)==0){
				printf("fount - %s %d %s\n",arr[i].name,arr[i].price,arr[i].material);
				f3=1;
				} else printf("not found\n");
		}
		break;
		}
	default:
		break;
	}
fclose(fp);
}