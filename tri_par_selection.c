#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //declaration du Tableau T à triée et sa longueur n
    int T[15] = {12,-1,45,45,100,14,-78,80,10,-100},
    n = 10;

    //Tri
    for (int i = 0; i < n-1; i++){ 
        //chercher la position de l'entier plus petit de i+1 à n
        int min = i;
        for (int j = i+1;j<n;j++){
            if (T[j] < T[min]){
                min=j;
            }
        }
        //permutation de T[i] avec T[min]
        if (T[i]>T[min]){
            int temp = T[i];
            T[i] = T[min];
            T[min] = temp;
        }
    }

    //affichage du Tableau triée
    printf("Tableau Trie : ");
    for (int k = 0;k<n;k++){
        printf("%d ",T[k]);
    }

    

    
    
    

    return 0;
}
