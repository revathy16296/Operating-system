////Get  ten  numbers  from  user.  Store  them  in  an  array. 
 ///Using  functions,  find  sum,  average  and product of the numbers.
 ///Print the sum, average and product in the main function.
#include<stdio.h>
int findsum(int a[]);
float findavg(int a[]);
int findproduct(int a[]);
int main()
{
int m;int sum;float avg;int product;
int a[10]={23,24,56,76,87,12,32,21,31,41};
sum=findsum(a);
avg=findavg(a);
product=findproduct(a);
printf("sum=%d",sum);
printf("average=%1f",avg);
printf("product=%d",product);
return 0;
}
int findsum(int a[])
{
int sum=0;int i;
for(i=0;i<10;i++)
{
sum=sum+a[i];
}
return sum;
}
float findavg(int a[])
{
  int sum=0;int i; float avg;
  for(i=0;i<10;i++)
  {
    sum=sum+a[i];
  }
avg=sum/10;
return avg;
}
int findproduct(int a[])
{
 int product=1;int i;
 for(i=0;i<10;i++)
 {
   product=product*a[i];
 }
 return product;
}
