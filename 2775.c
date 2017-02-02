/*
problem : https://www.acmicpc.net/problem/2775
*/

#include <stdio.h>

int main()
{
 int k,n,t;
 int arr[15][15];
 scanf("%d",&t);
 
 for(int i=1; i<=14; i++) 
 {
  arr[0][i]=i;
 }
 
 for(int i=1; i<=14; i++) 
 {
  for(int j=1; j<=14; j++) 
  {
   arr[i][j]=0;
   for(int k=1; k<=j; k++) 
   {
    arr[i][j] +=arr[i-1][k];
   }
  }
 }

 for(int i=0; i<t; i++) 
 {
  scanf("%d",&k);
  scanf("%d",&n);
  printf("%d\n",arr[k][n]);
 }
 } 
