
 ██████╗ ███████╗ █████╗ ██████╗ ███╗   ███╗███████╗    ██╗   ██╗ ██████╗    ██╗
 ██╔══██╗██╔════╝██╔══██╗██╔══██╗████╗ ████║██╔════╝    ██║   ██║██╔═████╗  ███║
 ██████╔╝█████╗  ███████║██║  ██║██╔████╔██║█████╗      ██║   ██║██║██╔██║  ╚██║
 ██╔══██╗██╔══╝  ██╔══██║██║  ██║██║╚██╔╝██║██╔══╝      ╚██╗ ██╔╝████╔╝██║   ██║
 ██║  ██║███████╗██║  ██║██████╔╝██║ ╚═╝ ██║███████╗     ╚████╔╝ ╚██████╔╝██╗██║
 ╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝╚═════╝ ╚═╝     ╚═╝╚══════╝      ╚═══╝   ╚═════╝ ╚═╝╚═╝
                                                                               
                                                             
## Compilations des sources.
1. gcc -Wall -Wextra -g -c fichier_c.c -o fichier_output.o
2. gcc fichier_output.o -o main
 
 
## Objectits : Ecrire, compiler et exécuter les programmes C.

* ### Exercice 1.1
	* **Objectif : afficher la phrase "bonjour le monde!"**
	* Fichiers : bonjour.c, bonjour.o, bonjour
	* Bibliothèques : stdio.h
	* Références : PPT de cours
	* Difficulté : Aucune
	* Commentaires : 
		* Facile
		
* ### Exercice 1.2
	* **Objectif : caculer l'aire et le périmètre d'un cercle**
	* Fichiers : circle.c, circle.o, circle
	* Bibliothèques : stdio.h
	* Références : Aucune
	* Difficulté : Aucune
	* Commentaires : 
		* Facile
		
* ### Exercice 1.3
	* **Objectif : afficher les tailles des différents types de variables**
	* Fichiers : sizeof_types.c, sizeof_types.o, sizeof_types
	* Bibliothèques : stdio.h
	* Références : http://www.cplusplus.com/reference/cstdio/printf/
	* Difficulté : nous ne connaissions pas les différents type de spécificateur de format
	* Commentaires : 
		* Nombreuses recherches pour prendre connaissance des types de format

* ### Exercice 1.4
	* **Objectif : afficher le contenu de différents types de variables**
	* Fichiers : variables.c, variables.o, variables
	* Bibliothèques : stdio.h
	* Références : http://www.cplusplus.com/reference/cstdio/printf/
	* Difficulté : nous ne connaissions pas les différents type de spécificateur de format
	* Commentaires : 
		* Nombreuses recherches pour prendre connaissance des types de format

* ### Exercice 1.5
	* **Objectif : prise en main des opérateurs arithmétiques et logiques**
	* Fichiers : operators.c, operators.o, operators
	* Bibliothèques : stdio.h
	* Références : PPT de cours
	* Difficulté : peu de difficulté
	* Commentaires : 
		* même opérateur que les autres languages déjà étudiés

* ### Exercice 1.6
	* **Objectif : afficher un triangle rectangle à l'écran, prise en main for et while**
	* Fichiers : boucles.c, boucles.o, boucles, boucles_while.c, boucles_while.o, boucles_while
	* Bibliothèques : stdio.h
	* Références : Ancien cours de Monsieur Spitonni en IUT
	* Difficulté : peu de difficulté
	* Commentaires : 
		* nécessite un peu de réflexion pour la structure de l'algo (double boucle)

* ### Exercice 1.7
	* **Objectif : manipulation opérateur et prise en main de l'instruction switch**
	* Fichiers : operators2.c, operators2.o, operators2
	* Bibliothèques : stdio.h
	* Références : PPT cours
	* Difficulté : peu de difficulté
	* Commentaires : 
		* Facile

* ### Exercice 1.8
	* **Objectif : manipulation du modulo et opérateur logiques**
	* Fichiers : conditions.c, conditions.o, conditions
	* Bibliothèques : stdio.h
	* Références : 
	* Difficulté : peu de difficulté
	* Commentaires : 
		* Facile, il faut juste comprendre le rapport en le modulo et la divisibilité

* ### Exercice 1.9
	* **Objectif : convertir un décimal en binaire**
	* Fichiers : binary.c, binary.o, binary
	* Bibliothèques : stdio.h, math.h
	* Références : 
	* Difficulté : moyen
	* Commentaires : 
		* Structure "complexe"
		* Pas de concaténation en C
		* Il est nécessaire de bien comprendre la méthode pour convertir un décimal en binaire

* ### Exercice 1.10
	* **Objectif : affichage de données provenant d'une liste**
	* Fichiers : etudiant.c, etudiant.o, etudiant
	* Bibliothèques : stdio.h
	* Références : https://overiq.com/c-programming/101/array-of-strings-in-c/
	* Difficulté : moyen
	* Commentaires : 
		* Connaissance du fonctionnement des listes en C
		* Une string est une liste de charactères, cela rajoute un niveau dans la liste
