#include "biblioteca.h"

int Biblioteca::prestaLlibre(const string& titol, int& codiExemplar)
{
    int i = 0;
    bool found = false;
    while (!found && i < m_numLlibres)
    {
        if (m_llibres[i].getTitol() == titol)
            found = true;
        else i++;
    }
    if (found)
    {
        bool prestat = m_llibres[i].prestaLlibre(codiExemplar);
        if (prestat)
            return 0;
        else return -1;
     }
    else 
        return -2;
}
int Biblioteca::retornaLlibre(const string& titol, int& codiExemplar)
{
    int i = 0;
    bool found = false;
    while (!found && i < m_numLlibres)
    {
        if (m_llibres[i].getTitol() == titol)
            found = true;
        else i++;
    }
    if (found)
    {
        bool retornat = m_llibres[i].retornaLlibre(codiExemplar);
        if (retornat)
            return 0;
        else 
            return -1;
    }
    else
        return -2;
}

void Biblioteca::afegeixLlibre(const Llibre& llibre)
{
    m_llibres[m_numLlibres] = llibre;
    m_numLlibres++;
}

