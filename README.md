Gilles COUTARD 

Manipulation des éléments d'un tableau

Compléter le fichier tab1.c en y ajoutant les fonctions suivantes :

    Ecrire une fonction qui recherche si un tableau (d'entiers) contient une valeur donnée.
    Le tableau, son nombre d'éléments et la valeur cherchée devront être donnés en arguments de cette fonction. La fonction retournera l'indice de la valeur dans le tableau si elle est trouvée et -1 dans le cas contraire.
    Ecrire une fonction qui échange le ième et le jème éléments d'un tableau.
    Ecrire une fonction qui enlève une certaine valeur d'un tableau (plus exactement, il s'agit de supprimer le premier élément du tableau ayant cette valeur).

    Attention:
        la valeur donnée peut éventuellement ne pas figurer dans le tableau.
        le nombre d'éléments utilisés dans le tableau va changer ...
    Ecrire une fonction qui enlève TOUS les éléments du tableau égaux à une certaine valeur (et non simplement le premier comme précédemment)
    Ecrire une fonction qui insère une nouvelle valeur dans un tableau à une position donnée. Attention: cette valeur ne doit être insérée que :
        si elle ne figure pas déjà dans le tableau
        si la valeur de l'indice est correcte
        si la taille du tableau est suffisante

    Remarque: ne pas confondre la taille maximale du tableau et le nombre d'éléments effectivement utilisés (ce dernier pouvant varier, contrairement à la taille qui est déterminée une fois pour toutes).
    Si vous n'avez créé qu'un seul fichier, découpez votre programme en 2 fichiers: un fichier contenant la fonction main() et un fichier contenant les fonctions de manipulation du tableau. Faites en sorte qu'il ne puisse pas y avoir d'erreurs à l'appel des fonctions. Pensez aussi à adapter le Makefile.


