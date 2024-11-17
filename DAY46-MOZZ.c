#include <stdio.h>

int main() {
 int fv,iu;
    scanf("%d",&fv);
    while (iu<fv){
         int q,p,d,yok;
    scanf("%d%d%d",&q,&p,&d);
    yok=q+(d/30);
    if (yok%p>1)     printf("%d\n",(yok/p)+1);
     else  printf("%d\n",(yok/p) + (yok%p));
     iu=iu+1;
    }
    return 0;
}

