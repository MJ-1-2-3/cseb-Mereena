#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum,r;
    printf("Enter the number: ");
    scanf("%d",&n);

    while (n>9)
    {
        sum = 0;
        while (n!=0)
        {
            r = n % 10;
            sum += pow(r,2);
            n = n/ 10;
        }
        n = sum;
    }

    if ( n == 1)
    {
        printf("\nHappy number\n");
    }
    else{
        printf("Not a happy number");
    }
}