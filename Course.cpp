#include <string>
#include <iostream>
#include <vector>
#include "Course.h"

/*    
    private:
        int _identifiant;
        std::vector<int> _nScore;
        int _meilleurScore = -1;
        std::string _pseudo;

    public:
        int getId();
        int getnScore();
        int getmScore();
        std::string getPseudo();
        int moyenneScores();
        void montrePseudo();
        void montremScore();
        void montreScores();
        void addScore();
        Course(int identifiant);
*/


int Course::getId()
{
    return _identifiant;
}

std::string Course::getPseudo()
{
    return _pseudo;
}

/*std::vector<int> Course::getnScore()
{
    return _nScore;
}*/

void Course::moyenneScores()
{
    int moyenne = (_nScore[0] + _nScore[1] + _nScore[2]) / 3;
    std::cout << moyenne << std::endl;
}

void Course::montrePseudo()
{
    std::cout << getPseudo() << std::endl;
}

void Course::montremScores()
{
   for (int i = 0; i < 3; i++)
   {
        for (int j = 0; j < 3; j++)
        {
            if (_nScore[i] < _nScore[i+1])
            {
                int retientScore = _nScore[i+1];
                _nScore[i+1] = _nScore[i];
                _nScore[i] = retientScore;
                j = 0;
            }   
        }
        std::cout << _nScore[i] << std::endl;
   }
}

void Course::addScore(int scoretoadd)
{
    _nScore.push_back (scoretoadd);
}

Course::Course(int identifiant): _identifiant(identifiant) {};


