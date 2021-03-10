#include <iostream>
#include <string>
#include "Course.cpp"
#include <cstdlib>
#include <vector>

using namespace std;



int main ()
{   
    Course rainbowRoad(1);
    Course circuitMario(2);
    Course donjonBouftou(3);
    Course needForSpeed(4);
    Course dejaVu(5);
    int scoreRandom_1 = rand() %1000;
    int scoreRandom_2 = rand() %1000;
    int scoreRandom_3 = rand() %1000;
    string pseudoJoueur_1;
    string pseudoJoueur_2;
    string pseudoJoueur_3;
    int choixCourse;
    cout << "Veuillez rentrer le pseudo du premier joueur." << endl;
    cin >> pseudoJoueur_1;
    cout << "Veuillez rentrer le pseudo du deuxième joueur." << endl;
    cin >> pseudoJoueur_2;
    cout << "Veuillez rentrer le pseudo du troisième joueur." << endl;
    cin >> pseudoJoueur_3;
    cout << "Veuillez choisir une course :" << endl;
    cout << "1 pour Rainbow Road" << endl << "2 pour circuit Mario" << endl << "3 pour donjon Bouftou" << endl << "4 pour need for speed" << endl << "5 pour déjà vu" << endl;  
    cin >> choixCourse;
    if (choixCourse == 1)
    {
        cout << pseudoJoueur_1 << ", votre score est de :" << scoreRandom_1 <<  endl;
        rainbowRoad.addScore(scoreRandom_1);
        cout << pseudoJoueur_2 << ", votre score est de :" << scoreRandom_2 <<  endl;
        rainbowRoad.addScore(scoreRandom_2);
        cout << pseudoJoueur_3 << ", votre score est de :" << scoreRandom_3 <<  endl;
        rainbowRoad.addScore(scoreRandom_3);
        cout << "Voici les scores pour Rainbow Road :" << endl;
        rainbowRoad.montremScores();
        cout << "La moyenne de vos scores est de :" << endl;
        rainbowRoad.moyenneScores();
        if (scoreRandom_1 < scoreRandom_2 && scoreRandom_1 < scoreRandom_3)
        {
            cout << "Le meilleur score est de " << scoreRandom_1 << ", une véritable performance de la part de " << pseudoJoueur_1 << endl;
        }
        if (scoreRandom_2 < scoreRandom_1 && scoreRandom_2 < scoreRandom_3)
        {
            cout << "Le meilleur score est de " << scoreRandom_2 << ", une véritable performance de la part de " << pseudoJoueur_2 << endl;
        }
        if (scoreRandom_3 < scoreRandom_1 && scoreRandom_3 < scoreRandom_2)
        {
            cout << "Le meilleur score est de " << scoreRandom_2 << ", une véritable performance de la part de " << pseudoJoueur_3 << endl;
        }
    }
    if (choixCourse == 2)
    {
        cout << pseudoJoueur_1 << ", votre score est de :" << scoreRandom_1 <<  endl;
        circuitMario.addScore(scoreRandom_1);
        cout << pseudoJoueur_2 << ", votre score est de :" << scoreRandom_2 <<  endl;
        rainbowRoad.addScore(scoreRandom_2);
        cout << pseudoJoueur_3 << ", votre score est de :" << scoreRandom_3 <<  endl;
        rainbowRoad.addScore(scoreRandom_3);
        cout << "Voici les scores pour Circuit Mario." << endl;
        circuitMario.montremScores();
        cout << "La moyenne de vos scores est de :" << endl;
        circuitMario.moyenneScores();
        if (scoreRandom_1 < scoreRandom_2 && scoreRandom_1 < scoreRandom_3)
        {
            cout << "Le meilleur score est de " << scoreRandom_1 << ", une véritable performance de la part de " << pseudoJoueur_1 << endl;
        }
        if (scoreRandom_2 < scoreRandom_1 && scoreRandom_2 < scoreRandom_3)
        {
            cout << "Le meilleur score est de " << scoreRandom_2 << ", une véritable performance de la part de " << pseudoJoueur_2 << endl;
        }
        if (scoreRandom_3 < scoreRandom_1 && scoreRandom_3 < scoreRandom_2)
        {
            cout << "Le meilleur score est de " << scoreRandom_2 << ", une véritable performance de la part de " << pseudoJoueur_3 << endl;
        }
    }
    if (choixCourse == 3)
    {
        cout << pseudoJoueur_1 << ", votre score est de :" << scoreRandom_1 <<  endl;
        donjonBouftou.addScore(scoreRandom_1);
        cout << pseudoJoueur_2 << ", votre score est de :" << scoreRandom_2 <<  endl;
        rainbowRoad.addScore(scoreRandom_2);
        cout << pseudoJoueur_3 << ", votre score est de :" << scoreRandom_3 <<  endl;
        rainbowRoad.addScore(scoreRandom_3);
        cout << "Voici les scores pour Donjon Bouftou." << endl;
        donjonBouftou.montremScores();
        cout << "La moyenne de vos scores est de :" << endl;
        donjonBouftou.moyenneScores();
        if (scoreRandom_1 < scoreRandom_2 && scoreRandom_1 < scoreRandom_3)
        {
            cout << "Le meilleur score est de " << scoreRandom_1 << ", une véritable performance de la part de " << pseudoJoueur_1 << endl;
        }
        if (scoreRandom_2 < scoreRandom_1 && scoreRandom_2 < scoreRandom_3)
        {
            cout << "Le meilleur score est de " << scoreRandom_2 << ", une véritable performance de la part de " << pseudoJoueur_2 << endl;
        }
        if (scoreRandom_3 < scoreRandom_1 && scoreRandom_3 < scoreRandom_2)
        {
            cout << "Le meilleur score est de " << scoreRandom_2 << ", une véritable performance de la part de " << pseudoJoueur_3 << endl;
        }
    }
    if (choixCourse == 4)
    {
        cout << pseudoJoueur_1 << ", votre score est de :" << scoreRandom_1 <<  endl;
        needForSpeed.addScore(scoreRandom_1);
        cout << pseudoJoueur_2 << ", votre score est de :" << scoreRandom_2 <<  endl;
        rainbowRoad.addScore(scoreRandom_2);
        cout << pseudoJoueur_3 << ", votre score est de :" << scoreRandom_3 <<  endl;
        rainbowRoad.addScore(scoreRandom_3);
        cout << "Voici les scores pour Need for Speed." << endl;
        needForSpeed.montremScores();
        cout << "La moyenne de vos scores est de :" << endl;
        needForSpeed.moyenneScores();
        if (scoreRandom_1 < scoreRandom_2 && scoreRandom_1 < scoreRandom_3)
        {
            cout << "Le meilleur score est de " << scoreRandom_1 << ", une véritable performance de la part de " << pseudoJoueur_1 << endl;
        }
        if (scoreRandom_2 < scoreRandom_1 && scoreRandom_2 < scoreRandom_3)
        {
            cout << "Le meilleur score est de " << scoreRandom_2 << ", une véritable performance de la part de " << pseudoJoueur_2 << endl;
        }
        if (scoreRandom_3 < scoreRandom_1 && scoreRandom_3 < scoreRandom_2)
        {
            cout << "Le meilleur score est de " << scoreRandom_2 << ", une véritable performance de la part de " << pseudoJoueur_3 << endl;
        } 
    }
    if (choixCourse == 5)
    {
        cout << pseudoJoueur_1 << ", votre score est de :" << scoreRandom_1 <<  endl;
        dejaVu.addScore(scoreRandom_1);
        cout << pseudoJoueur_2 << ", votre score est de :" << scoreRandom_2 <<  endl;
        rainbowRoad.addScore(scoreRandom_2);
        cout << pseudoJoueur_3 << ", votre score est de :" << scoreRandom_3 <<  endl;
        rainbowRoad.addScore(scoreRandom_3);
        cout << "Voici les scores pour Déjà vu." << endl;
        dejaVu.montremScores();
        cout << "La moyenne de vos scores est de :" << endl;
        dejaVu.moyenneScores();
        if (scoreRandom_1 < scoreRandom_2 && scoreRandom_1 < scoreRandom_3)
        {
            cout << "Le meilleur score est de " << scoreRandom_1 << ", une véritable performance de la part de " << pseudoJoueur_1 << endl;
        }
        if (scoreRandom_2 < scoreRandom_1 && scoreRandom_2 < scoreRandom_3)
        {
            cout << "Le meilleur score est de " << scoreRandom_2 << ", une véritable performance de la part de " << pseudoJoueur_2 << endl;
        }
        if (scoreRandom_3 < scoreRandom_1 && scoreRandom_3 < scoreRandom_2)
        {
            cout << "Le meilleur score est de " << scoreRandom_2 << ", une véritable performance de la part de " << pseudoJoueur_3 << endl;
        } 
    }


    
    return 0;
}