#include<stdio.h>
int main()
{
   int array[100],pos,c,size,value;
   printf("Enter number of element in array");
   scanf("%d",&size);
   printf("Enter %d element\n",size);
   for(c=0;c<size;c++)
   {

       scanf("%d",&array[c]);
   }
   printf("Enter the location where you want to insert an elemrnt");
   scanf("%d",&pos);
   printf("please enter the value to insert\n");
   scanf("%d",&value);
   for(c=size-1;c>=pos-1;c--)
   {
       array[c+1]=array[c];

   }
   array[pos-1]=value;
   //size++;
   printf("resultant array is \n");
   for(c=0;c<=size;c++)
   {
       printf("%d\n",array[c]);
   }
   return 0;

}
