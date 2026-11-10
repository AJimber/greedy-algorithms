#ifndef MONEDA
#define MONEDA

class Moneda
{
public:
    Moneda() = default;
    Moneda(int valor);

    int getValor() const;
    void setValor(int valor);

private:
    int valor_ = 0;
};

inline Moneda::Moneda(int valor) : valor_(valor) {}
inline int Moneda::getValor() const { return valor_; }
inline void Moneda::setValor(int valor) { valor_ = valor; }

#endif
