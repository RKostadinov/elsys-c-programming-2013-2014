#include<stdio.h>
int main () {
	float matrix[100][100];
	int n, counter_1, counter_2;
	float sum=0;
	scanf("%d", &n);
	if(n>100){
		while(n>100){
			scanf("%d", &n);
		}
	}
	for(counter_1=0;counter_1<n;++counter_1){
			for(counter_2=0;counter_2<n;++counter_2){
				scanf("%f",&matrix[counter_1][counter_2]);
			}
		}
	counter_1=0;
	while(counter_1<n){
		counter_2=counter_1;
		while(counter_2<n){
			counter_2++;
			sum=sum+matrix[counter_1][counter_2];
		}
		counter_1++;
	}
	printf("%f\n",sum);
	return 0;
}

	//float calculations are not always accurate

	/*counter_1=0;
	while(counter_1<n){
		printf("c1=%d",counter_1);
		counter_2=0;
		while(counter_2<n){
			scanf("%d",&matrix[counter_1][counter_2]);
			counter_2++;
		}
		scanf("\n");
		counter_1++;
	}
	counter_1=0;
	while(counter_1<n){
		counter_2=counter_1;
		while(counter_2<n){
			counter_2++;
			sum+=matrix[counter_1][counter_2];
		}
		counter_1++;
	}*/




/*for(counter_1=0;counter_1<n;++counter_1){
		printf("c1=%d\n",counter_1);
		for(counter_2=0;counter_2<n;++counter_2){
			scanf("%d",&matrix[counter_1][counter_2]);
			printf("c2=%d\n",counter_2);
		}
		scanf("\n");
	}
for(counter_1=0;counter_1<n;counter_1++){
		for(counter_2=counter_1;counter_2<n;++counter_2){
			sum+=matrix[counter_1][counter_2];
		}
	}*/
