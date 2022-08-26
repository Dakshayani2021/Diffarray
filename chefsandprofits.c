#include <stdio.h>

int main(void) {
	
	int T;
	scanf("%d",&T);
	while(T--){
	    int x,y,z,p;
	    scanf("%d %d %d",&x,&y,&z);
	    p=(z*x)-(y*x);
	    printf("%d\n",p);
	}
	return 0;
}


