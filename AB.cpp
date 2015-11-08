#include <stdio.h>


int main(void){
	int T,cs=0;
	unsigned long int n=0;
	char player[6];
	
	scanf("%d",&T);
	while(T--){
		scanf("%lu %s",&n,player);
		printf("\nCase %d: %lu %s",++cs,n,player);
	}
	
	
}
