#include <stdio.h>

int main() {
	int a,b[1000],flag=0;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	    scanf("%d",&b[i]);
    int s,m,l,r=a-1;
    scanf("%d",&s);
    while(l<=r){
    	m=(l+r)/2;
        if(s>b[m])
            l=m+1;
        else if(s==b[m]){
            flag=1;
            break;
        }
        else
            r=m-1;
    }
    if(flag)
        printf("Element Present in position %d\n",m+1);
    else
        printf("Element not pesent");
	return 0;
}
