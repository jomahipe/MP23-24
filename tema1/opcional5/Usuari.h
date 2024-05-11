#include <string>
using namespace std;

class Usuari
{
public:
    Usuari(string codi, string nom, int edat) { m_codi = codi; m_nom = nom; m_edat = edat; }
    Usuari() { m_codi = "nocode"; m_nom = "noname"; m_edat = 0;}
    //getters
    string getNom() const { return m_nom; }
    string getCodi() const { return m_codi; }
    int getEdat() const { return m_edat; }


private:
    string m_codi;
    string m_nom;
    int m_edat;

};
