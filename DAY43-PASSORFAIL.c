#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int N,X,P;
	    scanf("%d%d%d",&N,&X,&P);
	    if(X*3-(N-X)>=P)
	    {
	        printf("\nPASS");
	    }
	    else
	    {
	        printf("\nFAIL");
	    }
	}
	return 0;
}

