---
title: Projet C++ OOP
author: PierreLouisLetoquart
date: 2023-06-18
---

# Projet C++ OOP

Ce projet est un exemple ultra simplifié d'un programme en C++ utilisant la programmation orientée objet (OOP). Il est accompagné d'un Makefile pour faciliter la compilation et d'une configuration Docker pour exécuter le programme dans n'importe quel environnement. Des workflows GitHub sont également inclus pour tester la construction et l'exécution du programme.

## Stack du Projet

- Langage de programmation: C++
- Paradigme: Programmation Orientée Objet (OOP)
- Outils utilisés:
  - Makefile: Pour la compilation du programme
  - Docker: Pour l'exécution du programme dans un conteneur
  - GitHub Workflows: Pour tester le build et le déploiement avec GitHub Actions

## Comment exécuter le programme

Il existe deux options pour exécuter le programme : avec le Makefile ou avec Docker.

### Option 1: Utiliser le Makefile

1. Assurez-vous d'avoir `make` et `g++` installés sur votre système.
2. Ouvrez un terminal et placez-vous dans le répertoire racine du projet.
3. Exécutez la commande suivante pour compiler le programme :
   ```bash
   make
   ```
4. Exécutez la commande suivante pour exécuter le programme :
   ```bash
    ./main
   ```
5. Exécutez la commande suivante pour nettoyer les fichiers générés par la compilation :
   ```bash
   make clean
   ```

### Option 2: Utiliser le Docker

1. Assurez-vous d'avoir `docker` installé sur votre système.
2. Ouvrez un terminal et placez-vous dans le répertoire racine du projet.
3. Exécutez la commande suivante pour construire l'image Docker :
   ```bash
   docker build -t cpp_oop_img .
   ```
4. Exécutez la commande suivante pour exécuter le programme :
   ```bash
    docker run --rm cpp_oop_img
   ```
5. Exécutez la commande suivante pour nettoyer les fichiers générés par la compilation :
   ```bash
   docker rmi cpp_oop_img
   ```
