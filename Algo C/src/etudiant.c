#include <stdio.h>


int main(){
  
  char nom[5][7] = {"liger","cruau", "bellon","meynet", "metra"};
  char prenom[5][7] = {"arthur","clem","guigui","leo","axel"};
  char ville[5][13] = {"bron","haute-rivoire","marseille","annecy","insa"};
  int note_1[5] ={19,15,5,15,24};
  int note_2[5] ={15,15,18,15,20};

  int i;
  for (i=0; i < 5;i=i+1 ){
      printf("etudiant numero %i : %s %s \n habite à  %s \n à eu %i en algo \n et %i en archi\n", i, nom[i], prenom[i], ville[i], note_1[i], note_2[i]);
      
  }
  return 0;
}

