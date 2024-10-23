#include<stdio.h>
int ispalindrome(int num)
{
    int result = 0,remainder;
    while (num != 0)
    {
        remainder = num%10;
        result = result * 10 + remainder;
        num = num / 10;
    }
    return result;
}

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    int result = ispalindrome(num);
    if(num == result)
    {
        printf("The Entered number is an palindrome.\n");
    }
    else{
        printf("The Entered number is not an palindrome.\n");
    }
}
