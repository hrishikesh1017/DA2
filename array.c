#include <stdio.h>
int main()
{   int a,i;
    printf("enter the array size");
    scanf("%d",&a);
    int b[a];
    for (i=1;i<=a;i++){
        printf("enter the %d'th element",i);
        scanf("%d",&b[i]);
    } 
    for (i=1;i<=a;i++){
        printf("%d\n",b[i]);    
   }
}  