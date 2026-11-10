#ifndef MATERIAL
#define MATERIAL

class Material
{
public:
    Material() = default;
    Material(int etiqueta, float volumen, float precio);

    int getEtiqueta() const;
    float getVolumen() const;
    float getPrecio() const;

    void setEtiqueta(int etiqueta);
    void setVol(float volumen);
    void setPrecio(float precio);

private:
    int etiqueta_ = 0;
    float volumen_ = 0.0f;
    float precio_ = 0.0f;
};

inline Material::Material(int etiqueta, float volumen, float precio)
    : etiqueta_(etiqueta), volumen_(volumen), precio_(precio) {}

inline int Material::getEtiqueta() const { return etiqueta_; }
inline float Material::getVolumen() const { return volumen_; }
inline float Material::getPrecio() const { return precio_; }

inline void Material::setEtiqueta(int etiqueta) { etiqueta_ = etiqueta; }
inline void Material::setVol(float volumen) { volumen_ = volumen; }
inline void Material::setPrecio(float precio) { precio_ = precio; }

#endif
