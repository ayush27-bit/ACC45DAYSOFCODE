#include <stdio.h>

int main() {
 int t,p,q,s;
    
    scanf("%d",&t);
    while (t--){
    int c=0;
    scanf("%d%d",&p,&q);
    s=p+q;
    for(int i=2;i<=s;i=i+2){
    c++;
    }
    if(c%2==0)
    printf("alice\n");
    else
printf("bob\n");
s=0;
}


    return 0;
}

