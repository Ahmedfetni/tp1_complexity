#include <math.h>
#include "algo.h"


long int algorithme1(long int entier)
{
    long int i = 2;
    while (i < entier)
    {
        if( entier % i == 0)
        {
            return 0;
        }
        i++;
    }
    

    return 1;
}

long int algorithme2(long int entier)
{
    long int i = 2;
    while (i <= entier/2)
    {
        if( entier % i == 0)
        {
            return 0;
        }
        i++;
    }
    

    return 1;
}

long int algorithme3(long int entier)
{
    if (entier !=  2 && entier % 2 == 0)
        return 0;
    
    long int i = 3;
    while (i <= entier-2)
    {
        if( entier % i == 0)
        {
            return 0;
        }
        i+=2;
    }
    

    return 1;
}

long int algorithme4(long int entier)
{
    if (entier !=  2 && entier % 2 == 0)
        return 0;
    
    long int i = 3;
    while (i <= entier/2)
    {
        if( entier % i == 0)
        {
            return 0;
        }
        i+=2;
    }
    

    return 1;
}

long int algorithme5(long int entier)
{
    long int i = 2;
    double racine = sqrt(entier); 
    while (i <= racine)
    {
        if( entier % i ==0)
        {
            return 0;
        }
        i++;
    }
    

    return 1;
}

long int algorithme6(long int entier)
{
    if (entier !=  2 && entier % 2 == 0)
        return 0;
    
    long int i = 3;
    double racine = sqrt(entier); 
    while (i <= racine)
    {
        if( entier % i == 0)
        {
            return 0;
        }
        i+=2;
    }
    

    return 1;
}