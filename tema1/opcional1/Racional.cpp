#include "Racional.h"

    //Algorisme d'Euclides
    int minimComuDivisor(int a, int b){
     unsigned int t;
     while (a > 0){
         t = a;
         a = b % a;
         b = t;
     }
     return b;
 }

void NombreRacional::simplifica()
{
    int mcd = minimComuDivisor(m_numerador, m_denominador);
    m_numerador = m_numerador / mcd;
    m_denominador = m_denominador / mcd;
}

NombreRacional NombreRacional::suma(const NombreRacional& b) const
{
    NombreRacional a;
    int mcm = m_denominador * b.getDenominador();
    int num;
    num = ((m_numerador * (mcm / m_denominador)) + (b.getNumerador() * (mcm / b.getDenominador())));
    a.setNumerador(num);   
    a.setDenominador(mcm); 
    a.simplifica();
    return a;
}


NombreRacional NombreRacional::multiplica(const NombreRacional& b) const
{
    NombreRacional a;
    a.setNumerador((m_numerador * b.getNumerador()));
    a.setDenominador((m_denominador * b.getDenominador()));
    a.simplifica();
    return a;
}


NombreRacional NombreRacional::resta(const NombreRacional& b) const
{
    NombreRacional a;
    int mcm = m_denominador * b.getDenominador();
    int num;
    num = ((m_numerador * (mcm / m_denominador)) - (b.getNumerador() * (mcm / b.getDenominador())));
    a.setNumerador(num);   
    a.setDenominador(mcm); 
    a.simplifica();
    return a;
}

NombreRacional NombreRacional::divideix(const NombreRacional& b) const
{
    NombreRacional a;
    a.setNumerador((m_numerador * b.getDenominador()));
    a.setDenominador((m_denominador * b.getNumerador()));
    a.simplifica();
    return a;
}