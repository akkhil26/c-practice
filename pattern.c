#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i=0;
    while(i<=a-1){
        int j=0;
        while(j<=i){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}
