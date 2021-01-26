#include <stdio.h>


void creer_fichier(){
	FILE * fic1;
	char nom_fichier[20];
	int entier;
	printf("Donnez le nom du fichier  modifier : ");
	scanf("%s",nom_fichier);
	fic1=fopen(nom_fichier,"w");
	printf("Ecrivez une suite de nombre postif se terminant par -1 : ");
	scanf("%i",&entier);
	while(entier != -1){
		fprintf(fic1,"%i ",entier);
		scanf("%i",&entier);
	}
	fclose(fic1);
}

void afficher_fichier(){
	FILE * fic1;
	char nom_fichier[20];
	int entier;
	printf("Ecrivez le nom du fichier que vous voulez vérifier : ");
	scanf("%s",nom_fichier);
	fic1=fopen(nom_fichier,"r");
	if(fic1==NULL){
		printf("Le fichier est null.");
	}
	else{
		printf("Dans ce programme, il y a écrit : ");
		fscanf(fic1,"%i",&entier);
		while(!feof(fic1)){
			printf("%i ",entier);
			fscanf(fic1,"%i",&entier);
		}
	}
	fclose(fic1);
}

int main(){
	creer_fichier();
	afficher_fichier();
}
