#include "llibre.h"

Llibre::Llibre(string titol, string autor, int exemplars)
{
    m_titol = titol;
    m_autor = autor;
    m_exemplars = exemplars;
}

bool Llibre::prestaLlibre(int codi)
{
    if (!prestat[codi])
    {
        prestat[codi] = true;
        return true;
    }
    else 
        return false;
}

bool Llibre::retornaLlibre(int llibre)
{
    if (prestat[llibre])
    {
        prestat[llibre] = false;
        return true;
    }
    else 
        return false;
}

