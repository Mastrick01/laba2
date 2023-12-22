#include <stdio.h>
#include <stdlib.h>
#include "laba111.h"
int main(){
clothes*arr=NULL;
int n=0;
int stop=0;
while(stop!=1){
	int key;
	printf("1-load db, 2-print, 3-search\n");
	scanf("%d",&key);
	switch(key){
		case 1:{
			int key2;
			printf("1-create, 2-read\n");
			scanf("%d",&key2);
			if(key2==1){
				create(&arr,&n);
				if(!arr)
					printf("create error");
				else printf("created %d elem\n",n);
				write(arr,n);
				}else{
				read(&arr,&n);
				if(!arr) printf("read error");
				else printf("loaded %d elem\n",n);
				}
			break;
			}
		case 2:
			for(int i=0;i<n;i++)
				printf("%s %d %s\n",arr[i].name,arr[i].price,arr[i].material);
			break;
		case 3:
			search(arr,n);
			break;
		default:
			stop=1;
			break;
		}
	}
if(arr) free(arr);
return 0;
}
