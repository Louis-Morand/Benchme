
<div id="top"></div>


[![GitHub issues](https://img.shields.io/github/issues/benoit-arquilliere/Benchme?style=for-the-badge)](https://github.com/benoit-arquilliere/Benchme/issues)
[![GitHub forks](https://img.shields.io/github/forks/benoit-arquilliere/Benchme?style=for-the-badge)](https://github.com/benoit-arquilliere/Benchme/network)
[![GitHub stars](https://img.shields.io/github/stars/benoit-arquilliere/Benchme?style=for-the-badge)](https://github.com/benoit-arquilliere/Benchme/stargazers)



<br />
<div align="center">
    <h1 align="center">Benchme</h1>
    <p align="center">Programme de test de temps d'éxecution de tris.</p>
</div>

<br />
<details>
    <summary>Sommaire</summary>
    <ol>
        <li>
            <a href="#objectifs">Objet du projet</a>
            <ul>
                <a href="#details">Description du projet</a>
            </ul>
            <ul>
                <a href="#tools">Les outils utilisés</a>
            </ul>
        </li>
        <li>
            <a href="#commands">Usage des commandes</a>
        </li>
        <li>
            <a href="#resultats">Résultats attendus</a>
        </li>
        <li>
            <a href="#futur">Evolutions à venir</a>
        </li>
    </ol>
</details>

## Auteurs
* [MORAND Louis](https://github.com/Opystoglyphe)
* [ARQUILLIERE Benoit](https://github.com/benoit-arquilliere)


<div id="objectifs"></div>

## Objet du projet


<div id="details"></div>

### Description du projet

Les principaux objectifs du projet visent à implémenter 4 algorithmes de tri (tri a bulle, tri par sélection, tri par insertion, tri pas tas) permettant un tri croissant ou décroissant d’un tableau de nombre a virgules (float).   
De plus les grandes lignes à respecter sont les suivantes :  
- Écrire le code permettant de faire des mesures du temps d’exécution de chacun de ces quatre algorithmes en fonction de la taille des tableaux à trier. Les résultats des benchmarks permettront d’avoir une estimation de la complexité temporelle.
- Stocker les résultats des tests dans un fichier au format csv permettant d’utiliser un grapheur (excel, gnuplot, ...)
- Générer une documentation technique à partir des annotations et documentations présentesdans le code.
- Écrire le fichier README.md décrivant l’objet du projet, l’usage des commandes, les résultats attendus et les évolutions à venir. Pour que les résultats soient probants : vous devez respecter 4 contraintes :
- Les tableaux avant tri doivent être les mêmes pour chaque algorithme testé (cf notion de nombre pseudo aléatoire et de graine)
- Chaque algorithme devra être testé 3 fois avec des tableaux différents. Vous ne garderez que la valeur moyenne des trois tests.
- Vous devez trier des tableaux contenant des valeurs aléatoires comprises entre 0 et 106
- Vous devez réaliser les tests avec des tableaux contenants respectivement 100, 10^3, 10^4,10^5,10^6,10^7 valeurs


<div id="tools"></div>  

### Les outils utilisés

<!-- Description des outils utilisés -->

* [Visual Studio Code](https://code.visualstudio.com/)
* [Doxygen](https://www.doxygen.nl/index.html)


<div id="commands"></div>  

## Usage des commandes

Afin d'utiliser le programme, plusieurs commandes on été ajouté pour permettre d'effectuer des actions spécifiques.  

* make --> Permet de compiler (build) le projet.
* make clean --> Permet de 
* ./output/main data.csv --> Permet d'éxecuter le programme et de générer un fichier data.csv où les données seront stockées.



<div id="resultats"></div>  

## Résultats attendus

<!-- Description des résultats attendus -->


<div id="futur"></div>  

## Evolutions à venir

<!-- Description des évolutions possibles -->


<p align="right">|<a href="#top">Revenir en haut</a>|</p>

