#include <stdio.h>
 
int main()
{
   int m=4, n=4, c, d, matrix[4][4], transposed_matrix[4][4];
 
   for( c = 0 ; c < m ; c++ )
   {
      for(d=0;d<n;d++)
      {
         scanf("%d",&matrix[c][d]);
      }
      printf("\n");
   }
 
   for( c = 0 ; c < m ; c++ )
   {
      for( d = 0 ; d < n ; d++ )
      {
         transposed_matrix[d][c] = matrix[c][d];
      }
   }
 
   for( c = 0 ; c < n ; c++ )
   {
      for( d = 0 ; d < m ; d++ )
      {
         printf("%d ",transposed_matrix[c][d]);
      }  
      printf("\n");
   }
 
   return 0;
}