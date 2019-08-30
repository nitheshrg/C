#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,c,d;
	scanf("%d",&n);
	for(int i=0;i<(n*2-1);i++,printf("\n")){
	    for(int j=0;j<(n*2-1);j++){
	        c=abs(i-(n*2-1)/2);
	        d=abs(j-(n*2-1)/2);
	        c>d?printf("%d ",c+1):printf("%d ",d+1);
	    }
	}
	return 0;
}
