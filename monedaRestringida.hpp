#ifndef MONEDA_RESTRINGIDA
#define MONEDA_RESTRINGIDA

class MonedaRestringida
{
public:
    MonedaRestringida() = default;
    MonedaRestringida(int valor, int cantidad);

    int getValor() const;
    void setValor(int valor);

    int getCantidad() const;
    void setCantidad(int cantidad);

private:
    int valor_ = 0;
    int cantidad_ = 0;
};

inline MonedaRestringida::MonedaRestringida(int valor, int cantidad)
    : valor_(valor), cantidad_(cantidad) {}

inline int MonedaRestringida::getValor() const { return valor_; }
inline void MonedaRestringida::setValor(int valor) { valor_ = valor; }

inline int MonedaRestringida::getCantidad() const { return cantidad_; }
inline void MonedaRestringida::setCantidad(int cantidad) { cantidad_ = cantidad; }

#endif
