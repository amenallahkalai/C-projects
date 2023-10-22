#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //declaration du Tableau T à triée et sa longueur n
    int T[15] = {12,-1,45,100,14,-78,45,80,10,-100},
    n = 10;

    //Tri
    for (int j = 1; j < n; j++){
        //tri par tranche
        int i = j;
        while(T[i]<T[i-1] && i>0){
            int temp = T[i];
            T[i]=T[i-1];
            T[i-1]=temp;
            i=i-1;
        }
    }

    //affichage du Tableau triée
    printf("Tableau trie : ");
    for (int k = 0; k < n; k++){
        printf("%d ",T[k]);
    }


    
    

    return 0;
}
