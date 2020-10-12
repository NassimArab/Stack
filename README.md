# Noms
## CHABANE Mohamed
## ARAB Nassim

    
# Description du travail:

    *  La conception et le développement d'un ensemble des opérations unaires et binaires (ex: l’addition (+), l'affectation (=), la comparaison (==) ..etc  ) qui permettent de manipuler une ou plusieurs piles.
   
## Exo1
#### 1.Opérateur d’affectation :
    * Définir l'opération d'affectation (=) qui permet d'affecter une pile dans une autre par la creation d'une copie de l'originale et copier l'ancien tableau vers la copie.
    * Réalisation des test pour l'opérateur d’affectation, tous les tests sont valides.

## Question 2
#### 1.Opérateur de comparaison :
    * Définir l'opération d'affectation (==) qui permet de comparer de Stacks par la comparaison des tous les éléments de la premiere pile avec les elements de la deuxieme.
    * Réalisation des test pour l'operateur de comparaison, tous les tests sont valides.
## Question 3
#### 1.Opérateur d’addition unaire :
    * Définir l'opération d'addition unaire (+=) qui permet d'additioner une pile dans une autre, en empilant les éléments de la deuxieme pile par ordre de dépilage dans la premiere pile, à l'aide de la fonction push() qui va incrémenter la taille de la premiere pile si elle n'est pas suffisante pour stocker les éléments des deux.
    * Réalisation des test pour l'operateur d'addition unaire, tous les tests sont valides.
   
## Question 4
#### 1.Opérateur d’addition binaire :
    * Définir l'opération d'addition binaire (Stack + Stack) qui permet de d'additioner deux piles en utilisant l'additioneur unaire (+=).
    * Réalisation des test pour l'opérateur d'addition binaire, tous les tests sont valides.

## Question 5
#### 1.Opérateur d’affichage :
    * Définir l'opération d'affichage qui permet d’imprimer le contenu de la pile sur un sortie, en copiant les éléments de la pile dans la variable de la sortie standard passée par paramètre.
    * Réalisation des test pour l'opérateur d'addition binaire, tous les tests sont valides.

## Exo2
## Question 6
#### 1.Safety push :
    * Définir l'opérateur ( +=(int) ) qui permet d'ajouter l'élément passé par parametre dans le top de la pile s'il est supérieur au sommet actuel de la pile, et lève une exception de typeIncorrectPush sinon.
    * Réalisation des test pour l'opérateur d'addition binaire, tous les tests sont valides.
   
## Question 7
#### 1.Les tours de Hanoï :
    * Réalisation de l’algorithme de résolution des tours de Hanoï avec N disques en utilisant la solution récursive. On déplace tout d'abord les N-1 disques de l'emplacement de départ vers l'emplacement intermédiaire à l'aide de l'emplacement d'arrivée, puis on déplace le disque N vers l'emplacement d'arrivée. Ensuite, on fait pareil pour les N-2 disques dans l'emplacement intermédiaire, par les déplacer vers l'emplacement de départ, puis on déplace le disque N-1 vers l'emplacement de l'arrivée, jusqu'à ce qu'on termine le déplacement de tous les disques vers l'emplacement d'arrivée.
# Exécution
  * makefile
  *  ./stack_test
  *  ./stack_main
