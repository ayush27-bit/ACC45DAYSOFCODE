#include <stdio.h>

int main() {
	// your code goes here
int t,x,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&x);
                if(x<(n-x)){
                    printf("%d\n",x);
                    
                }
                else{
                    printf("%d\n",(n-x));
                }

    }
	return 0;
}

