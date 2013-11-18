#include<stdio.h>

int main(){	
int n=0;
char *number[8];
    number[0] = "edno";
    number[1] = "dve";
    number[2] = "tri";
    number[3] = "chetiri";
    number[4] = "pet";
    number[5] = "shest";
    number[6] = "sedem";
    number[7] = "osem";
    number[8] = "devet";

	while(n<=0 || n>=100){
	scanf("%d", &n);
}
	
	if(n<10){
	printf("%s", number[n-1]);
}
	if(n==10){printf("deset");}
	
	if((n>10) && (n<20)){
		if(n==11){printf("edinadeset");}
		else if(n==12){printf("dvanadeset");}
		else{printf("%snadeset", number[n%10 - 1]);}
	}
	if ((n / 10)>0) {
		if (n>=20 && n<=30) {printf("dvadeset");}
		else {printf("%sdeset", number[(n / 10)-1]);}}
		if ((n % 10)!=0) { printf(" i %s", number[(n % 10)-1]);}
	
	return 0;
}
