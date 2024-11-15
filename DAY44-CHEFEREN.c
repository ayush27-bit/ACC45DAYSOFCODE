#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,a,b,e=0,o=0;
	    scanf("%d%d%d",&n,&a,&b);
	    for(int i=1;i<=n;i++)
	    {
	        if(i%2==0)
	        e++;
	        else o++;
	    }
	    printf("%d\n",e*a+o*b);
	    
	}
	return 0;
}

