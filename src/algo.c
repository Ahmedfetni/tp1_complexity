#include "algo.h"
#include <math.h>

int algorithme1(int entier)
{
    int i = 2;
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

int algorithme2(int entier)
{
    int i = 2;
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

int algorithme3(int entier)
{
    if (entier !=  2 && entier % 2 == 0)
        return 0;
    
    int i = 3;
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

int algorithme4(int entier)
{
    if (entier !=  2 && entier % 2 == 0)
        return 0;
    
    int i = 3;
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

int algorithme5(int entier)
{
    int i = 2;
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

int algorithme6(int entier)
{
    if (entier !=  2 && entier % 2 == 0)
        return 0;
    
    int i = 3;
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