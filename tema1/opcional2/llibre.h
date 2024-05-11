#pragma once
#include <string>
using namespace std;
const int MAX_EXEMPLARS = 10;
class Llibre
{
public:
    Llibre(string titol, string autor, int nExemplars);
    Llibre() { m_exemplars = 0; }
    bool prestaLlibre(int codi);
    bool retornaLlibre(int llibre);
    //getters
    string getTitol() const { return m_titol; }
    string getAutor() const { return m_autor; }
    bool disponible(int exemplar) { return !prestat[exemplar]; }
    //setters
    void setTitol(string t) { m_titol = t; }
    void setAutor(string autor) { m_autor = autor; }
private:
    string m_titol;
    string m_autor;
    int m_exemplars;
    bool prestat[MAX_EXEMPLARS];
};

