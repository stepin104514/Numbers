#include<stdio.h>
#include "number_operations.h"
int main()
{
    int option,result;
    int num1=10,num2=20;
    
    printf("Choose option\n1.To find whether number is positive\n2.To find whether number is negative");
    printf("\n3.To find whether number is odd\n4.To find whether number is even\n5.To find whether number is prime");
    printf("\n6.To calculate the sum of digits\n7.To find whether number is perfect square");
    printf("\n8.To find whether number is armstrong");
    printf("\n9.To find whether number is power of two\n10.To find sum of natural numbers");
    printf("\n11.To find whether number1 is divisible by number2\n12.To find LCM\n13.To find HCF\n14 TO find remainder\n");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        result=is_positive(num1);
        break;
        case 2:
        result=is_negative(num1);
        break;
        case 3:
        result=is_odd(num1);
        break;
        case 4:
        result=is_even(num1);
        break;
        case 5:
        result=is_prime(num1);
        break;
        case 6:
        result=calculate_sum_of_digits(num1);
        break;
        case 7:
        result=isPerfectSquare(num1);
        break;
        case 8:
        result=is_armstrong(num1);
        break;
        case 9:
        result=is_power_of_two(num1);
        break;
        case 10:
        result=find_sum_of_natural_nos(num1);
        break;
        case 11:
        result=is_divisible_by(num1,num2);
        break;
        case 12:
        result=find_lcm(num1,num2);
        break;
        case 13:
        result=find_hcf(num1,num2);
        break;
        case 14:
        result=find_remainder(num1,num2);
        break;
    }
    
    switch(result)
    {
        case 1:
        printf("True");
        break;
        case 0:
        printf("False");
        break;
        case -1:
        printf("Not applicable");
        break;
        default:
        printf("Result");
    }
    return 0;
}
