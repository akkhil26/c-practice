// armstrong number 

#include<stdio.h>
int main()
{
    int i,n,sum,product,digit,b,a,count;
    printf("Enter the number\n");
    scanf("%d",&n);
    b=a=n;
    count=1;
    while (n>10){     // number of digit find
        n=n/10;
        count++;}
    sum=0;
    while (a>0){
        digit=a%10;   //find digit in a number
        a=a/10;
        product=1;
        for (i=1;i<=count;i++)   // find product
            product=product*digit;
        
        sum=sum+product;         // find sum
        } 
    if (sum==b)
    printf("THE NUMBER %d is ARMSTRONG",b);
    else
        
    printf("The number %d is not ARMSTRONG ",b);
    return 0;
    
}
