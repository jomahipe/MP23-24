#include "Activitat.h"

Activitat::Activitat(string nom, int nParticipants, int edatMinima, int edatMaxima, string dia, string hora) 
{
    m_nom = nom;
    m_dia = dia;
    m_hora = hora;
    m_maxParticipants = nParticipants; 
    m_nParticipants = 0;
    m_edatMin = edatMinima;
    m_edatMax = edatMaxima;
}

bool Activitat::buscaParticipant(string& nom)
{
    int i = 0;
    bool found = false;
    while (i < m_maxParticipants && !found)
    {
        if (m_participants[i].getNom() == nom)
            found = true;
        else
            i++;
    }    
    return found;
}

int Activitat::afegeixParticipant(const Usuari& u)
{
    int edat = u.getEdat();
    string nom = u.getNom();
    if (edat < m_edatMin || edat > m_edatMax)
        return -1;
    else if (buscaParticipant(nom))
        return -2;
    else if (m_nParticipants >= m_maxParticipants)
        return -3;
    else
    {
        m_participants[m_nParticipants] = u;
        m_nParticipants++;
        return 0;
    }
}