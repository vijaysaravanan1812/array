//11) to check whether number is odd of even without using control statements

#include<stdio.h>
int main()
{
    char arr[2][5] = {"even","odd"};
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("number is %s \n",arr[num%2]);
    return 0;
} 