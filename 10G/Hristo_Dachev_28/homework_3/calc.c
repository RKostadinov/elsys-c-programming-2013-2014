#include <stdio.h>

int main(){
	
	int a,b,c;
	char ch[3];
	
	scanf("%d %s %d", &a,ch,&b);
	
	if (strcmp(ch, "add")==0){
		c=a+b;
		printf("%d",c\n);
	}
	else{
		if (strcmp(ch,"sub")==0){
			c=a-b;
			printf("%d",c\n);
		}
		else{
			if (strcmp(ch,"mul")==0){
				c=a*b;
				printf("%d",c\n);
			}
			else{
				if (b!=0)
					if (strcmp(ch,"div")==0){
						c=a/b;
						printf("%d",c\n);
					}
					else{
						if (strcmp(ch,"mod")==0){
							c=a%b;
							printf("%d",c\n);
						}
						else printf ("error\n");
					}
				else printf("ne se deli na 0\n");
			}
		}
	}	
	
	
	return 0;
}
	
