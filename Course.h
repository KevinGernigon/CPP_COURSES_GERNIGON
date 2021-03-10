#include <string>
#include <vector>

class Course
{
    private:
        int _identifiant;
        std::vector<int> _nScore;
        int _meilleurScore = -1;
        std::string _pseudo = "";

    public:
        int getId();
        int getnScore();
        int getmScore();
        std::string getPseudo();
        void moyenneScores();
        void montrePseudo();
        void montremScores();
        void montreScores();
        void addScore(int scoretoadd);
        Course(int identifiant);
};