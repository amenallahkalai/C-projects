/*
dans cette exercice , on va enlever tous les caractères blanc d'une chaine ch à l'exception du premier
caractere blanc après un mot et le remplir dans une chaine chr.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //declaration d'une chaine ch et chr et un conteur j
    char ch[100] = "hello\n   my\t  \n  wor   ld\0",chr[100]="";
    int j=0;


    //boulce qui va passer toute la chaine ch
    for(int i=0;i<strlen(ch);i++){

        //tester si la caractere de position i est non blanc 
        if (!(ch[i]==' ' || ch[i]=='\n' || ch[i]=='\t' || ch[i]=='\0')){
            chr[j]=ch[i]; //ajouter ch[i] à chr en position j
            j=j+1; //incrementation du conteur j
        }

        //tester si la caractere de position i est blanc
        if ((ch[i]==' ' || ch[i]=='\n' || ch[i]=='\t' || ch[i]=='\0')){

            //tester si ch[i] est précedé par un blanc ou non
            if (!(ch[i-1]==' ' || ch[i-1]=='\n' || ch[i-1]=='\t' || ch[i-1]=='\0') && (i>0)){
                chr[j]=ch[i];
                j=j+1;
            }
            else continue;
        }
    }

    //afficher la chaine chr
    printf("%s",chr);

    return 0;
}
