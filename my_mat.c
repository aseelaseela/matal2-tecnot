#include <stdio.h>
#include "my_mat.h"
int min(int i, int j){
  return (i < j) ? i:j;
}

void floyd_Warshall(int graph[][size])
{
   int i,j,k;
   for ( k = 0; k < size; k++)
   {
      for ( i = 0; i < size; i++)
      {
        for ( j = 0; j < size; j++)
        {
          if(graph[i][j]!=0 && graph[i][k]!=0 &&graph[k][j]!=0)
          graph[i][j]= min(graph[i][j],graph[i][k]+graph[k][j]);
        else if(i!=j && graph[i][j]==0 && graph[i][k]!=0 && graph[k][j]!=0)
          graph[i][j]=graph[i][k]+graph[k][j];
        }
      }
   }
}
 void func2(int graph[][size],int i,int j)
 {
  if(graph[i][j]!=0 )
   printf("True\n");
   else printf("False\n");
 }
 
void func3(int graph[][size],int i,int j) 
{
  if(graph[i][j]!=0 )
   printf("%d\n",graph[i][j]);
  else printf("-1\n");
}