#include<stdio.h>
int isPrime(int);
int main()
{
    int x;

	do
    {
        scanf("%d", &x);
        printf("Enter number %d\n",x);
        if (isPrime(x)==0)
        {
            printf("%d is not prime\n",x);
        }
        
        
    } while (isPrime(x)==0);
    printf("%d is prime number \n",x);

}
int isPrime(int x)
{
    int y = x/2;
    if (x>1)
    {
        for(int i=2; i<=y; i++)
        {
            if(x % i == 0)
            {
                return 0;
            } 
        }
        return 1;
    }
}
