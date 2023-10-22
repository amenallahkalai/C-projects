#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){

    //declaration du Tableau T à triée et sa longueur n
    int T[10] = {12,-1,45,0,45,100},
    n = 6,

    //Tri 
    changed = 1;
    while (changed == 1) {
        changed = 0;
        for (int i = 0; i < n-1; i++){
            if (T[i] > T[i+1]) {
                //permutation des elements
                int temp = T[i];
                T[i] = T[i+1];
                T[i+1] = temp;
                changed = 1;
            }
        }      
    }
    
    //affichage du Tableau triée
    printf("Tableau Triee : ");
    for (int j = 0; j < n; j++){
        printf(" %d ",T[j]);
    }
    
    return 0;

}
