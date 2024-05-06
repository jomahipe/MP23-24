
class NombreRacional
{
public:
	//constructors
	NombreRacional() { m_numerador = 0; m_denominador = 0; }
	NombreRacional(int num, int den) { m_numerador = num; m_denominador = den; }
	//setters
	void setNumerador(int num) { m_numerador = num; }
	void setDenominador(int den) { m_denominador = den; }
	//getters
	int getNumerador() const { return m_numerador; }
	int getDenominador() const { return m_denominador; }
	//metodes
	bool esValid() const { return (m_denominador != 0); }
	void simplifica();
	NombreRacional suma(const NombreRacional& b) const;
	NombreRacional multiplica(const NombreRacional& b) const;
	NombreRacional resta (const NombreRacional& b) const;
	NombreRacional divideix(const NombreRacional& b) const;
private:
	int m_numerador;
	int m_denominador;
};

