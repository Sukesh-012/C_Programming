#include<stdio.h>
int main()
{
 int array[23];
 int i, sum=0,n;
 int *ptr;
printf("Enter the number of elements:");
scanf("%d",&n);
 for(i=0;i<n;i++){
printf("Enter an element:");
scanf("%d",&array[i]);
}
ptr = array;
 for(i=0;i<5;i++) 
 {
 sum = sum + *ptr;
ptr++;
 }
