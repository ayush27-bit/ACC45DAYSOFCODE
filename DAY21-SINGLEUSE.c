#include <stdio.h>

int main() {
 int df;
    scanf("%d",&df);
    while(df--){
        int ed,bn,hj;
        scanf("%d%d%d",&ed,&bn,&hj);
        ed=ed-hj;
        int yrt=ed/bn;
        int yes=1+yrt;
        int no=2+yrt;
        if(ed%bn==0) printf("%d\n",yes);
        else printf("%d\n",no);
    }// your code goes here
	return 0;
}

