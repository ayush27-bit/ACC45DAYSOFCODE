#include <stdio.h>

int main() {
	// your code goes here
int t;
    scanf("%d",&t);
    while(t!=0)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        printf("%d \n",((4*x)+y));
        t--;
    }
	
	return 0;
}
