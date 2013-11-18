#include <stdio.h>

int main()
{
    int length = 13;
    char deck[length];
    scanf("%s", deck);
    int temp, i , k;
    char ordered[13] = "23456789TJQKA";

    for (i=0;i<length;i++){
        for (k=i;k<length;k++){
            if (deck[k]==ordered[i]){
                temp=deck[k];
                deck[k]=deck[i];
                deck[i]=temp;
            }
        }
    }
    printf("%s", deck);
    return 0;
}