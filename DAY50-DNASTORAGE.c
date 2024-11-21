#include <stdio.h>

int main() {
    int i,t,n,j,k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    char result[1001];
	    char s[1001];
	    scanf("%d",&n);
	    scanf("%s",s);
	    for(j=0,k=0;j<n;j++)
	    {
	        if(j%2==0)
	        {
	            if(s[j]=='0' && s[j+1]=='0')
	            result[k]='A';
	            
	        else if(s[j]=='0' && s[j+1]=='1')
	            result[k]='T';
	            
	        else if(s[j]=='1' && s[j+1]=='0')
	            result[k]='C';
	            
	        else if(s[j]=='1' && s[j+1]=='1')
	            result[k]='G';
	            
	            k++;
	        }
	    }
	    result[k]='\0';
	    printf("%s",result);
	    printf("\n");
	}
	return 0;
}
