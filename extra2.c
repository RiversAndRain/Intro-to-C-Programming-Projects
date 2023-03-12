#include <stdio.h>
#include <math.h>

int main (void)
{
    unsigned long long int user_number;

    printf("Enter a base_10 number from 0 --> 18,446,744,073,709,551,615: ");
    scanf("%llu", &user_number);

    int binary_num[64] = {};
   
    int i = 0;

    for (i = 0; user_number > 0; i++)
    {
        binary_num[i] = user_number%2;
        user_number = user_number/2;

    }

    for (int j = i - 1; j >= 0; j-- )
    {
        printf("%d",binary_num[j]);
    }
    printf("\n");

    return 0;
}