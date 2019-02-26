#include<stdio.h>
#include<cs50.h>
int main (void)
{
    int a=500,b=250,c=200,d=100,e=50,f=25,g=25,h=10,j=5,k=1;
    int i=0;
    int amount=get_int("type amount:");
    while ( amount>=a)
    {
    amount=amount-a; i++;
    }
    while (amount>=b)
    {
     amount=amount-b; i++;
    }
    while ( amount>=c)
    {
        amount=amount-c; i++;
    }
    while (amount>=d)
    {
        amount=amount-d; i++;
    }
while (amount>=e)
{
amount=amount-e; i++;
}
while (amount>=h)
{
    amount=amount-h; i++;
}
while (amount>=f)
{
    amount=amount-f; i++;
}
while (amount>=g)
{
    amount=amount-g; i++;
}
while (amount>=j)
{
    amount=amount-j; i++;
}
while (amount>=k)
{
    amount=amount-k; i++;
}
    printf(" you can have %i coins:",i);
}
