#include <time.h>
#include "temps_exec.h"

int longeur_1_2[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71,};

int longeur_3[] ={ 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311};

int longeur_4[] = {4817, 4831, 4861, 4871, 4877, 4889, 4903, 4909, 4919, 4931, 4933, 4937, 4943, 4951, 4957, 4967, 4969, 4973, 4987, 4993};

int longeur_5[] = {17393, 17401, 17417, 17419, 17431, 17443, 17449, 17467, 17471, 17477, 17483, 17489, 17491, 17497, 17509, 17519, 17539, 17551, 17569, 17573, };

int longeur_6[] ={104459, 104471, 104473, 104479, 104491, 104513, 104527, 104537, 104543, 104549, 104551, 104561 ,104579, 104593, 104597, 104623, 104639, 104651, 104659, 104677,};

int longeur_7[] ={1034233, 1034237, 1034239, 1034249, 1034251, 1034281, 1034309, 1034317, 1034323, 1034339, 1034353, 1034357, 1034359, 1034381, 1034387, 1034419, 1034443, 1034461, 1034477, 1034479, };

double  mesurer_le_temps(int (*f)(int), int valeur){
    
    clock_t t1, t2 ;
    
    t1 = clock();
    
    (*f)(valeur);
    
    t2 = clock();
    
    return (double) (t2-t1)/CLOCKS_PER_SEC ;
}