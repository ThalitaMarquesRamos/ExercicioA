#include <stdio.h>
int main ()
{
 int num[4], temp, i=1,j=1;
 
 for(j=0;j<=3;j++){
  scanf("%d",&num[j]);
  if((num[j]<1)||(num[j]>100))
   return 0;   }
 
 for(j=0;j<=6;j++) 
 {   if(i>3) 
    
   i=1;
  if(num[i-1]>num[i])
  {
   temp=num[i-1]; 
   num[i-1]=num[i]; 
   num[i]=temp; 
  }
  j++; 
  i++; 
 }
  
 if((num[0]<num[1]+num[2])&&(num[1]<num[0]+num[2])&&(num[2]<num[0]+num[1]))
 {
  puts("S\n");
 }
 else
 {
  if((num[1]<num[2]+num[3])&&(num[2]<num[1]+num[3])&&(num[3]<num[1]+num[2]))
   puts("Sim\n");,
   
  else   puts("Nao\n");
 }
  return 0; }
