#include <stdio.h>
#include <stdlib.h>
#include "laba111.h"
void create(clothes**arr, int *n){
printf("n=");
scanf("%d",n);
if(*n<=0)
	return;
*arr=(clothes*)calloc(*n,sizeof(clothes));
for(int i=0;i<*n;i++){
	printf("name - ");
	scanf("%s",(*arr)[i].name);
	printf("price - ");
	scanf("%d",&(*arr)[i].price);
	printf("material -  ");
	scanf("%s",(*arr)[i].material);
	}
}
void read(clothes**arr,int *n){
FILE*fp=fopen("file.txt","r");
if(!fp) return;
if(fscanf(fp,"%d",n)!=1)    
{
	fclose(fp);
	return;
	}
if(*n<=0){
	fclose(fp);
	return;
	}
*arr=(clothes*)calloc(*n,sizeof(clothes));
for(int i=0;i<*n;i++)   
{
	if(fscanf(fp,"%s %d %s",(*arr)[i].name,&(*arr)[i].price,(*arr)[i].material)!=3)
		break;
	}
fclose(fp);
}
void write(clothes*arr,int n){
if(n<=0)
	return;
FILE*fp=fopen("file.txt","w");
if(!fp)
	return;
fprintf(fp,"%d\n",n);
for(int i=0;i<n;i++)
{
	fprintf(fp,"%s %i %s\n",arr[i].name,arr[i].price,arr[i].material);
	}
fclose(fp);
}