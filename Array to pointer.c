#include <stdio.h>

int main(){

   int i, n, sum = 0;
       int *ptr;

           printf("Enter size of array : ");
           scanf("%d", &n);

           printf("Enter elements \n");
                for (i = 0; i < n; i++){
            scanf("%d", ptr + i);
           }

       for (i = 0; i < n; i++){
          sum = sum + *(ptr + i);
       }
       printf("Sum of all elements = %d", sum);
   return 0;
}
