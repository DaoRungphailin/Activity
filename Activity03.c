#include <stdio.h>
int main()
{
    int n, reversedInteger = 0, remainder, originalInteger;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalInteger = n;
    // reversed integer is stored in variable (#1)
    //n=1234321 , remainder , orig_int=1234321 , rev_int=1
    while (n != 0)
    {
        remainder = n % 10;
        reversedInteger = reversedInteger * 10 + remainder;
        n /= 10; //(#2)
    }
    // palindrome if orignalInteger and reversedInteger are equal (#3)
    //n=1234321 , remainder , orig_int=1234321 , rev_int=1234321
    if (originalInteger == reversedInteger)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);
    return 0;
}
