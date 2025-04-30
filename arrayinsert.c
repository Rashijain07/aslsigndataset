#include<stdio.h>
int main(){
int num, arr[22], elements,pos,item;
   printf("Enter the number of elements\n");
   scanf("%d", &num);
   printf("enter elements:\n");
   for (int i = 0; i < num; i++)
   {
   scanf("%d", &arr[i]);
   }
   printf("the array is:");
    for (int i = 0; i < num; i++)
   {
   printf("%d  ", arr[i]);
   }


     printf("Enter the position:");
     scanf("%d", &pos);
     printf("enter item\n");
     scanf("%d", &item);
     
     for (int i = num-1; i >= pos-1; i--)
     {
        arr[i+1]=arr[i];

     }
    
     arr[pos-1]=item;
      num++;
     printf("the array is:\n");
    for (int i = 0; i < num; i++)
   {
   printf("%d  ", arr[i]);
   }
return 0;
}