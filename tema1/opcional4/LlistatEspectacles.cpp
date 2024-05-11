#include "LlistatEspectacles.h"

bool LlistatEspectacles::afegeixEspectacle(const Espectacle &e)
{
    if (m_nEspectacles >= MAX_ESPECTACLES)
        return false;
    else 
    {
        m_espectacles[m_nEspectacles] = e;
        m_nEspectacles++;
        return true;
    }
}


int LlistatEspectacles::compraEntrades(string nom, string dia, int nEntrades, float& preu)
{
    int i = 0;
    bool found = false;
    while (i < MAX_ESPECTACLES && !found)
    {
        if (m_espectacles[i].getNom == nom && m_espectacles[i].getDia == dia)
            found = true;
        else 
            i++;
    }
    if (!found)
        return -2;
    else
    {
        if (m_espectacles[i].getEntradesLliures <= nEntrades)
        {
            m_espectacles[i].reservaEntrades(nEntrades);
            preu = m_espectacles[i].getPreu();
            return 0;
        }
        else
            return -1;
    }
}


