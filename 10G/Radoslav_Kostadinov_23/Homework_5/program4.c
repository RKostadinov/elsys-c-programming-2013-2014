#include <stdio.h>

int main()
{
    int m1, m2, m5;
    float m;
    scanf("%d %d %d %f", &m1, &m2, &m5, &m);
    int counter_1 = 0, counter_2 = 0, counter_5 = 0;
    while ( m5 > 0 && m >= 5 )
    {
        m = m - 5;
        m5--;
        counter_5++;
    }
    while ( m2 > 0 && m >= 2 )
    {
        m = m - 2;
        m2--;
        counter_2++;
    }
    while ( m1 > 0 && m >= 1 )
    {
        m = m - 1;
        m1--;
        counter_1++;
    }
    if ( m == 0 )
    {
        printf("Yes: %d, %d, %d", counter_1, counter_2, counter_5);
    }
    else
    {
        printf("No");
    }
    return 0;
}