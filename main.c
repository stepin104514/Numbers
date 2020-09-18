#include<stdio.h>
int main()
{
    
    int num1=153;
    int num2=8;
    int result=is_armstrong(num1);
    printf("%d",result);
    switch(result)
    {
        case 1:
        printf("True");
        break;
        case 0:
        printf("False");
        break;
        case -1:
        print("Not applicable");
        break;
    }
    return 0;
}
