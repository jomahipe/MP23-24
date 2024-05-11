#include "Usuari.h"


const int MAX_PERSONES = 40;
class Activitat
{
public:
    Activitat(string nom, int nParticipants, int edatMinima, int edatMaxima, string dia, string hora);
    //getters
    string getNom() const { return m_nom; }
    string getDia() const { return m_dia; }
    string getHora() const { return m_hora; }
    int getEdatMinima() const { return m_edatMin; }
    int getEdatMaxima() const { return m_edatMax; }
    int getMaximParticipants() const { return m_maxParticipants; }
    int getParticipants() const { return m_nParticipants;}
    
    bool buscaParticipant(string& nom);
    int afegeixParticipant(const Usuari& u);
private:   
    string m_nom;
    string m_dia;
    string m_hora;
    int m_nParticipants;
    int m_maxParticipants;
    int m_edatMin;
    int m_edatMax;
    Usuari m_participants[MAX_PERSONES];

};
