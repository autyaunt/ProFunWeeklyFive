#include<stdio.h>
int isPrime(int);
int main(){
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
    return 0;
}

int isPrime(int x){
    int i =2;
    int sum=0;
    while (i<=x)
    {
        if(x%i==0){
            sum+=i;
        }
        i++;
    }
    if (sum==0)
    {
        return 0;
    }
    
    else if (sum==x)
    {
        return 1;
    }
    else{
        return 0;
    }   
}
