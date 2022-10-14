#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "temps_exec.h"
#include "algo.h"

long int longeur_1_2[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71,};

long int longeur_3[] ={ 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311};

long int longeur_4[] = {4817, 4831, 4861, 4871, 4877, 4889, 4903, 4909, 4919, 4931, 4933, 4937, 4943, 4951, 
4957, 4967, 4969, 4973, 4987, 4993};

long int longeur_5[] = {17393, 17401, 17417, 17419, 17431, 17443, 17449, 17467, 17471, 17477, 17483, 17489,
 17491, 17497, 17509, 17519, 17539, 17551, 17569, 17573, };

long int longeur_6[] ={104459, 104471, 104473, 104479, 104491, 104513, 104527, 104537, 104543, 104549, 104551,
 104561 ,104579, 104593, 104597, 104623, 104639, 104651, 104659, 104677,};

long int longeur_7[] ={1034233, 1034237, 1034239, 1034249, 1034251, 1034281, 1034309, 1034317, 1034323,
 1034339, 1034353, 1034357, 1034359, 1034381, 1034387, 1034419, 1034443, 1034461, 1034477, 1034479, };

long int longeur_8[] = {10000019,10000169,10000223,10000379,10000931,10006721,10010101,10011101,10016189,
10019689,10068809,10100011,10101101,10101869,10111001,10131923,10152463,10153331,63158401,63858541,} ;

long int longeur_9[]={
    250990001,253124999,253555759,254799641,254908033,257885161,259259257,261104399,261305843,263123573,264333259,265371653,266624669,281089147,283281277,284871511,285646799,289224097,289327979,292299923,
};

long int longeur_10[]={
    1028910301,1031223317,1039988707,1041293663,1046197333,1073676287,1073807359,1080787909,1088888881,1095912793,1096980919,1097393351,1097393447,1097393663,1097393683,1097877707,1109179363,1111111231,1111211111,1111411141,
};

long int longeur_11[] ={
    98765421103,98765432041,98765432099,98765442301,98770039073,98796959879,98876530421,98876532401,99660088441,99884446699,99971919197,99999199999,
    97531813579 ,97586413027,98246064289,98610401689,
    85662309563,87397578377,87563167093,87654219371,
};

long int longeur_12[]={
    111160669681,111161191111,111417192023,111696081881,112346958007,113013596393,113131311401,113391385603,115829122963,118116011609,118233435679,119218851371,121392937879,
};

long int longeur_13[]={
    1000000000039,1000000000063,1000000001159,1000000002217,1000000999999,1000008000001,1000123457689,
    1049179854847,1050100100501,1078834318169,1099511628401,1100011100011,1110110110111,1110111110111,
    1111111999999,1111118111111,1111120211111,1116295198451,1118810161681,1123529253211,  
};

long int longeur_14[]={
    10000000000283, 10006181886601, 10011111122113, 10012345678901, 10102323454577, 10110111011111,
    10000000000283,10006181886601,10011111122113,10012345678901,10102323454577,10110111011111,
    10861196119801 ,10987654321001,11091501631241,11108452651921,11111333333333,11236129794797,11376747235397,11410337850553,
};

long int longeur_15[] ={
    100000000105583,100033000330001,100110101011001,100352695899791,101012345678789,101012345678989,101103107109113,101103107109307,101741582076581,105010123456789,105120615024773,106111115118119,106800081666611,109139149179199, 
    111111151111111 ,116315256993601,116666666666611,119315717513911,119755797430727,122334444555553,123123454321321,
};

long int longeur_16[]={
1111235916285193, 1181118711931201, 1208152477719361, 1235711131175321, 1238926361552897, 1255571292290713, 1301477951890177, 1311753223571113, 1311870831664661, 1333333333333333, 1379131521253133, 1391098979592919, 1423214346574567, 1510553619999637, 1593350922240001, 1609161918110111, 1616668118999191, 1657688103077659, 1680588011350901, 1693182318746371, 
};
long int tab[] = {104459, 1034233,10000019,253555759,1028910301,98765421103,113391385603};
//there is no  standred c data type to store such a bi number number 
/*long long longeur_20[]={
    10089886811898868001,10092003300140014003,10093100991010310111,10141516181932277123,10611063106910871091,10691097123712491259,10911097110311091151,11111111111111111011,11111313171722335577,11138479445180240497,11976506590973322187,11281963036964038421,12345678901234567891,12345678910987654321,12797382490434158663,12904149405941903143,13080048459073205527,13169525310647365859,13315146811210211749,13337777797999979999,
};*/

/*Une fonction pour calculer le temps de n'importe quel algo */
double temps(long int (*f)(long int),long int valeur)
{
    
    clock_t t1, t2 ;
    
    t1 = clock();
    
    (*f)(valeur);// appel
    
    t2 = clock();
    
    return (double) (t2-t1)/CLOCKS_PER_SEC ;
}
/*
    Les fonctions du partie 2 question 2
    calculer  le temps de traitement de 20 nombre pour chaque longeur on utilisant les 6 algo
***************************************************************************

*/
/*le temps pour algo 1  avec 20 nombre de longeurs de 1-2 jusqu"à 16  */
void mesurer_le_temps_algo1()
{
    printf("\nl'algorithme 1:\n");
    printf("\npour les nombres premier longeur 1 et 2\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t", temps(algorithme1,longeur_1_2[i])*1000);
    }

    printf("\npour les nombre premier longeur 3\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%f\t ", temps(algorithme1,longeur_3[i]));
    }

    printf("\npour les nombre premier longeur 4\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%f\t ", temps(algorithme1,longeur_4[i]));
    }

    printf("\npour les nombre premier longeur 5\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%f\t ", temps(algorithme1,longeur_5[i]));
    }

    printf("\npour les nombre premier longeur 6\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%f\t ", temps(algorithme1,longeur_6[i]));
    }

    printf("\npour les nombre premier longeur 7\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme1,longeur_7[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 8\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme1,longeur_8[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 9\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme1,longeur_9[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 10\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme1,longeur_10[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }printf("\npour les nombre premier longeur 11\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme1,longeur_11[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 12\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme1,longeur_12[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 13\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme1,longeur_13[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 14\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme1,longeur_14[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 15\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme1,longeur_15[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 16\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme1,longeur_16[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    

        printf("\n");
}

/*le temps pour algo 2 avec 20 nombre de longeurs de 1-2 jusqu"à 16 */
void mesurer_le_temps_algo2()
{
    printf("\nl'algorithme 2:\n");
    printf("\npour les nombres premier longeur 1 et 2\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t", temps(algorithme2,longeur_1_2[i])*1000);
    }

    printf("\npour les nombre premier longeur 3\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme2,longeur_3[i])*1000);
    }

    printf("\npour les nombre premier longeur 4\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme2,longeur_4[i])*1000);
    }

    printf("\npour les nombre premier longeur 5\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme2,longeur_5[i])*1000);
    }

    printf("\npour les nombre premier longeur 6\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme2,longeur_6[i])*1000);
    }

    printf("\npour les nombre premier longeur 7\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme2,longeur_7[i])*1000);
    }
    printf("\npour les nombre premier longeur 8\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme2,longeur_8[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 9\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme2,longeur_9[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 10\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme2,longeur_10[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }printf("\npour les nombre premier longeur 11\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme2,longeur_11[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 12\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme2,longeur_12[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 13\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme2,longeur_13[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 14\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme2,longeur_14[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 15\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme2,longeur_15[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 16\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme2,longeur_16[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
        printf("\n");
}

/*le temps pour algo 3 avec 20 nombre de longeurs de 1-2 jusqu"à 16 */
void mesurer_le_temps_algo3()
{
    printf("\nl'algorithme 3:\n");
    printf("\npour les nombres premier longeur 1 et 2\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t", temps(algorithme3,longeur_1_2[i])*1000);
    }

    printf("\npour les nombre premier longeur 3\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme3,longeur_3[i])*1000);
    }

    printf("\npour les nombre premier longeur 4\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme3,longeur_4[i])*1000);
    }

    printf("\npour les nombre premier longeur 5\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%f\t ms", temps(algorithme3,longeur_5[i])*1000);
    }

    printf("\npour les nombre premier longeur 6\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme3,longeur_6[i])*1000);
    }

    printf("\npour les nombre premier longeur 7\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme3,longeur_7[i])*1000);
    }
    printf("\npour les nombre premier longeur 8\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme3,longeur_8[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 9\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme3,longeur_9[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 10\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme3,longeur_10[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }printf("\npour les nombre premier longeur 11\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme3,longeur_11[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 12\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme3,longeur_12[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 13\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme3,longeur_13[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 14\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme3,longeur_14[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 15\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme3,longeur_15[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 16\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme3,longeur_16[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
        printf("\n");
}
/*le temps pour algo 4 avec 20 nombre de longeurs de 1-2 jusqu"à 16 */
void mesurer_le_temps_algo4()
{
    printf("\nl'algorithme 4:\n");
    printf("\npour les nombres premier longeur 1 et 2\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t", temps(algorithme4,longeur_1_2[i])*1000);
    }

    printf("\npour les nombre premier longeur 3\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme4,longeur_3[i])*1000);
    }

    printf("\npour les nombre premier longeur 4\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme4,longeur_4[i])*1000);
    }

    printf("\npour les nombre premier longeur 5\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme4,longeur_5[i])*1000);
    }

    printf("\npour les nombre premier longeur 6\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme4,longeur_6[i])*1000);
    }

    printf("\npour les nombre premier longeur 7\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme4,longeur_7[i])*1000);
    }printf("\npour les nombre premier longeur 8\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme4,longeur_8[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 9\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme4,longeur_9[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 10\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme4,longeur_10[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }printf("\npour les nombre premier longeur 11\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme4,longeur_11[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 12\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme4,longeur_12[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 13\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme4,longeur_13[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 14\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme4,longeur_14[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 15\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme4,longeur_15[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 16\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme4,longeur_16[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
        printf("\n");
}
/*le temps pour algo 5 avec 20 nombre de longeurs de 1-2 jusqu"à 16 */
void mesurer_le_temps_algo5()
{
    printf("\nl'algorithme 5:\n");
    printf("\npour les nombres premier longeur 1 et 2\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t", temps(algorithme5,longeur_1_2[i])*1000);
    }

    printf("\npour les nombre premier longeur 3\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme5,longeur_3[i])*1000);
    }

    printf("\npour les nombre premier longeur 4\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme5,longeur_4[i])*1000);
    }

    printf("\npour les nombre premier longeur 5\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme5,longeur_5[i])*1000);
    }

    printf("\npour les nombre premier longeur 6\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme5,longeur_6[i])*1000);
    }

    printf("\npour les nombre premier longeur 7\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme5,longeur_7[i])*1000);
    }
    printf("\npour les nombre premier longeur 8\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme5,longeur_8[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 9\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme5,longeur_9[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 10\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme5,longeur_10[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }printf("\npour les nombre premier longeur 11\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme5,longeur_11[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 12\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme5,longeur_12[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 13\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme5,longeur_13[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 14\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme5,longeur_14[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 15\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme5,longeur_15[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 16\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme5,longeur_16[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
        printf("\n");
}

/*le temps pour algo 6 avec 20 nombre de longeurs de 1-2 jusqu"à 16 */
void mesurer_le_temps_algo6()
{
    printf("\nl'algorithme 6:\n");
    printf("\npour les nombres premier longeur 1 et 2\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t", temps(algorithme6,longeur_1_2[i])*1000);
    }

    printf("\npour les nombre premier longeur 3\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme6,longeur_3[i])*1000);
    }

    printf("\npour les nombre premier longeur 4\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme6,longeur_4[i])*1000);
    }

    printf("\npour les nombre premier longeur 5\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme6,longeur_5[i])*1000);
    }

    printf("\npour les nombre premier longeur 6\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme6,longeur_6[i])*1000);
    }
    
    printf("\npour les nombre premier longeur 7\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme6,longeur_7[i])*1000);
    }
    printf("\npour les nombre premier longeur 8\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme6,longeur_8[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 9\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme6,longeur_9[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 10\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme6,longeur_10[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }printf("\npour les nombre premier longeur 11\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme6,longeur_11[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 12\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme6,longeur_12[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 13\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme6,longeur_13[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 14\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme6,longeur_14[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 15\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme6,longeur_15[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\npour les nombre premier longeur 16\n");
    for (int  i = 0; i < 20; i++)
    {
        printf("%fms\t ", temps(algorithme6,longeur_16[i])*1000);
        //printf("%ld\n",longeur_7[0]);
    }
    printf("\n");       
}
/*
    partie 2  question 3 Pour des longueurs différentes de nombres, allant de 6 à 12, exécuter les 6
    programmes 50 fois pour calculerla moyenne du temps d’exécution. 
    ************************************************************************************************

*/

double** moy_temps_d_exec()
{
        double** moyennnes = (double**) malloc(sizeof(double*)*6);
        for (int i = 0; i < 6; i++)
        {
            moyennnes[i] =(double*)malloc(sizeof(double)*6);

        }
         double moy1 =  0 ;
         double moy2 =  0 ;
         double moy3 =  0 ;
         double moy4 =  0 ;
         double moy5 =  0 ;
         double moy6 =  0 ;
        int j = 0;
        for ( j; j < 3; j++)
        {
             moy1 =  0 ;
             moy2 =  0 ;
             moy3 =  0 ;
             moy4 =  0 ;
             moy5 =  0 ;
             moy6 =  0 ;
            for (int i = 0; i < 50; i++)
            {
                moy1 +=temps(algorithme1,tab[j]);
                moy2 +=temps(algorithme2,tab[j]);
                moy3 +=temps(algorithme3,tab[j]);
                moy4 +=temps(algorithme4,tab[j]);
                moy5 +=temps(algorithme5,tab[j]);
                moy6 +=temps(algorithme6,tab[j]);
                
            }
            moyennnes[0][j]= moy1/50;
            moyennnes[1][j]= moy2/50;
            moyennnes[2][j]= moy3/50;
            moyennnes[3][j]= moy4/50;
            moyennnes[4][j]= moy5/50;
            moyennnes[5][j]= moy6/50;
        }
            /*   -------------- j = 3 --------------   */
            moy2 =  0 ;
            moy3 =  0 ;
            moy4 =  0 ;
            moy5 =  0 ;
            moy6 =  0 ;
            for (int i = 0; i < 50; i++)
            {   
                moy2 +=temps(algorithme2,tab[j]);
                moy3 +=temps(algorithme3,tab[j]);
                moy4 +=temps(algorithme4,tab[j]);
                moy5 +=temps( algorithme5,tab[j]);
                moy6 +=temps( algorithme6,tab[j]);
                
            }
            moyennnes[0][j]= -1;
            moyennnes[1][j]= -1;
            moyennnes[2][j]= moy3/50;
            moyennnes[3][j]= moy4/50;
            moyennnes[4][j]= moy5/50;
            moyennnes[5][j]= moy6/50;


            //moy2 =  0 ;
            //moy3 =  0 ;
            
                            /*   -------------- j = 4 --------------   */
            j++;
            
            moy4 =  0 ;
            moy5 =  0 ;
            moy6 =  0 ;
            for (int i = 0; i < 50; i++)
            {   
                //moy2 +=temps(algorithme2,tab[j]);
                //moy3 +=temps(algorithme3,tab[j]);
                moy4 +=temps(algorithme4,tab[j]);
                moy5 +=temps( algorithme5,tab[j]);
                moy6 +=temps( algorithme6,tab[j]);
                
            }
            moyennnes[0][j]= -1;
            moyennnes[1][j]= -1;
            moyennnes[2][j]= -1;
            moyennnes[3][j]= moy4/50;
            moyennnes[4][j]= moy5/50;
            moyennnes[5][j]= moy6/50;

        for ( j = 5; j < 6; j++)
        {
            
            moy4 =  0 ;
            moy5 =  0 ;
            moy6 =  0 ;
            for (int i = 0; i < 50; i++)
            {
                //moy4 +=temps(algorithme4,tab[j]);
                moy5 +=temps( algorithme5,tab[j]);
                moy6 +=temps( algorithme6,tab[j]);
                
            }
            moyennnes[0][j]= -1;
            moyennnes[1][j]= -1;
            moyennnes[2][j]= -1;
            moyennnes[3][j]= -1;//moy4/50;
            moyennnes[4][j]= moy5/50;
            moyennnes[5][j]= moy6/50;
        }
        
        return moyennnes;
}