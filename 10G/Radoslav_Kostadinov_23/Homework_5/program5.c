#include<stdio.h>

int fact(int n);
int main(){
	int n, counter;
	float sum, one=1;

while(n<0 || n>20){scanf("%d", &n);}

  for(counter=1; counter<=n; counter++) {sum = sum + one/fact(counter);}

  printf("%f\n",sum);  

return 0;
}

int fact(int n){
int num, result=1;
for (num=1; num<=n; num++) {
result = result * num;}
return result;
}