#include <stdio.h>
#include "algo.h"
#include "test.h"

int bigprimes[]={2,3,16, 42, 155, 10, 16, 30,5,7,11,13,17,19,23,97,277,281,283,293,307,200,317,331,1049,1051,1061,1063,1069,1087,1217,};

void tester()
{
    printf("test du algorithme1\n");
    printf("********************\n");
    for (int i = 0; i <31 ; i++)
    {
        char* message = algorithme1(bigprimes[i]) ? "\033[0;32m est primaire \033[0m":"\033[0;31m non primaire  \033[0m";
        printf("%d %s\n", bigprimes[i], message);
    }
    
    printf("\ntest du algorithme2\n");
    printf("********************\n");
    for (int i = 0; i <31 ; i++)
    {
        char* message = algorithme2(bigprimes[i]) ? "\033[0;32m est primaire  \033[0m":"\033[0;31m non primaire  \033[0m";
        printf("%d %s\n", bigprimes[i], message);
    }

    printf("\ntest du algorithme3\n");
    printf("********************\n");
    for (int i = 0; i <31 ; i++)
    {
        char* message = algorithme3(bigprimes[i]) ? "\033[0;32m est primaire   \033[0m":"\033[0;31m non primaire  \033[0m";
        printf("%d %s\n", bigprimes[i], message);
    }

    printf("\ntest du algorithme4\n");
    printf("********************\n");
    for (int i = 0; i <31 ; i++)
    {
        char* message = algorithme4(bigprimes[i]) ? "\033[0;32m est primaire  \033[0m":"\033[0;31m non primaire \033[0m";
        printf("%d %s\n", bigprimes[i], message);
    }

    printf("\ntest du algorithme5\n");
    printf("********************\n");
    for (int i = 0; i <31 ; i++)
    {
        char* message = algorithme5(bigprimes[i]) ? "\033[0;32m est primaire   \033[0m":"\033[0;31m non primaire \033[0m";
        printf("%d %s\n", bigprimes[i], message);
    }

    printf("\ntest du algorithme 6\n");
    printf("********************\n");
    for (int i = 0; i <31 ; i++)
    {
        char* message = algorithme6(bigprimes[i]) ? "\033[0;32m est primaire   \033[0m":"\033[0;31m non primaire \033[0m";
        printf("%d %s\n", bigprimes[i], message);
    }
}