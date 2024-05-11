#include "Espectacle.h"

const int MAX_ESPECTACLES = 5;
class LlistatEspectacles
{
public:
    LlistatEspectacles() { m_nEspectacles = 0; }
    bool afegeixEspectacle(const Espectacle &e);
    int compraEntrades(string nom, string dia, int nEntrades, float& preu);

private:
   Espectacle m_espectacles[MAX_ESPECTACLES];
   int m_nEspectacles;
};

