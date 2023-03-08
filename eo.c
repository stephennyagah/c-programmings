// determination of even or odd numbers
# include<stdio.h>
int eo (int );
int main ()
{
    int num;
    printf("\n Enter value of number:");
    scanf("%d",&num);
    if(num%2==0)
    printf("Number is even");
    else
    printf("Number is odd");
    return 0;
}
//function determination
int eo (int j)
{
    int k;
    k=j;
    return(k%2==0);
}