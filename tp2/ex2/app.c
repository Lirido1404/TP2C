#include<stdlib.h>
#include<stdio.h>

int main(int argc, char *argv[]){


int nbr1;
int nbr2;
    if(argc < 3 ){
        printf("NaN");
        return 12;
    }else{
        nbr1 = atoi(argv[1]);
        nbr2 = atoi(argv[2]);
        
    }

    int somme = nbr1 + nbr2;
    

    printf("Le résultat est : %d\n",somme);

    return 0;
}