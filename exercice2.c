/*
dans cette exercice , on va compter les nombres des occurences de tous les mots d'une phrase ch 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    
    //declaration des variables qui seront utilises

    //chaine ch
    char ch[100];
    printf("Enter your sentence: ");
    gets(ch);
    strcat(ch," ");

    //on va stocker les mots seperament dans les tableaux de chaines ch_mot et ch_test chacun avec son role spicefique
    char ch_mot[10][10]={""},ch_test[10][10]={""}; 

    //declaration des conteurs et le tableau nbr dont on va stocker le nbre d'occ de chaque mot 
    int nbr[100]={0};
    int j=0,k=0;
    int u=0;


    //remplir le tableau de chaine ch_mot avec les mots
    for(int i=0;i<strlen(ch);i++){

        if (ch[i]==' '){
            continue;
        }

        while(ch[i]!=' '){
            ch_mot[j][k]=ch[i];
            k=k+1;
            i=i+1;
        }
        
        //tester si le mot existent precedement dans la phrase ou non 
        int count = 0;

        for(int a=0;a<j;a++){

            if (strcmp(ch_mot[j],ch_mot[a])==0 ){
                count=1;
            }

        }

        if (count ==1){

            strcpy(ch_mot[j],"");

        }

        k=0;
        j=j+1;

    }


    //compter le nbres d'occurence de chaque mot et le stocker dans un tableau nbr
    int j1=j;
    for(int l=0;l<j1;l++){

        j=0;
        for(int i=0;i<strlen(ch);i++){

            if (ch[i]==' '){

                continue;

            }
            while(ch[i]!=' '){

                ch_test[j][k]=ch[i];
                k=k+1;
                i=i+1;

            }
            if (strcmp(ch_mot[l],ch_test[j])==0){

                nbr[l]=nbr[l]+1;

            }

            k=0;
            j=j+1;

        }
        // afficher chaque mot avec son nbre de duplication dans la phrase
        if (strcmp(ch_mot[l],"")!=0){

            printf("le nombre d'occurence du mot '%s' est %d \n",ch_mot[l],nbr[l]);

        }
    }

    return 0;

}