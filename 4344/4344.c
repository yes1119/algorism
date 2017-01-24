#include <stdio.h>

int main()
{
 int c;
 int st[1001];
 int n;

 scanf("%d",&c);
 for(int i=0; i<c; i++)
 {
  
  scanf("%d",&n);
  float sum=0;
  float cnt=0;
  for(int j=0; j<n; j++) 
  {
   scanf("%d", &st[j]);
   sum +=st[j];
  }
  sum = sum/n;
  for(int k=0; k<n; k++)
  {
   if(sum<st[k])
   {
    cnt++;
   }
  }
  float ave = (float)((cnt*100)/n);

  printf("%.3f%%\n",ave);
 }
}
