/**
 * Lukas Krampitz
 * 10 Jan 2023
 * assignment1_part6
 * Using the two functions defined for Question 4 and Question 5, implement a program that prints all the
 * perfect numbers less than 10,000 in descending order.
 */
#include <stdio.h>

long long int divisorSum(int);
int isPerfect(int);

int main(void)
{

    // loop through all the numbers less than 10,000
    for (int i = 10000; i > 0; i--) // excludes 0 and used 6 as the smallest perfect number. Source: https://www.britannica.com/science/perfect-number
    {
        if (isPerfect(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

/**
 * Takes an integer n as a parameter and checks whether n is a perfect number.
 * If n is a perfect number, return 1, otherwise 0.
 */
int isPerfect(int n)
{
    return (divisorSum(n) - n) == n ? 1 : 0;
}

/**
 * Takes an integer n as a parameter and calculates and returns the sum of all
 * divisors of n.
 */
long long int divisorSum(int n)
{
    int sum = 0; // an accumulator to hold the sum

    // loop through all the numbers including an less than num and check if it is a factor (divisor)
    for (int i = n; i >= 1; i--)
    {
        // check for perfect divisability (no remainder)
        if (n % i == 0)
        {
            // then sum it up
            sum += i;
        }
    }

    // return the result
    return sum;
}