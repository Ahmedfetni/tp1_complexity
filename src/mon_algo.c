#include <stdio.h>
#include <stdlib.h>

int primaire1(int entier)
{
    int  n = 2;
    while ( n < entier )
    {
        if(entier % n == 0)
        {
                return 0;
        }
        n++;
        
    }
    
    return 1 ;
}
int primaire2(int entier )
{
    int les_nbr_primaire_46[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197,199};
    
    for (int i  = 0 ; i< 46;i++) 
    {
        if(entier/2 < les_nbr_primaire_46[i]){
            return 1;
        }
        
        if(entier % les_nbr_primaire_46[i] == 0)
        {
            return 0;
        }

    }

    int n = 211;
    while ( n < entier/2 )
    {
        if(entier % n == 0)
        {
                return 0;
        }
        n+=2;
        
    }
    
    return 1 ;


}

int main()
{
    char * est_primaire = primaire2(1367)? "true" : "false";
    printf("%s\n", est_primaire);
    est_primaire = primaire2(12)? "true" : "false";
    printf("%s\n", est_primaire);
    return 0;
}