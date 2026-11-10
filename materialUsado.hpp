#ifndef MATERIALUSADO
#define MATERIALUSADO

#include "material.hpp"

class MaterialUsado
{
public:
    MaterialUsado() = default;
    MaterialUsado(Material material, float volumenUsado);

    float getVolumenUsado() const;
    Material getMaterial() const;

    void setVolumenUsado(float volumenUsado);
    void setMaterial(Material material);

private:
    Material material_;
    float volumenUsado_ = 0.0f;
};

inline MaterialUsado::MaterialUsado(Material material, float volumenUsado)
    : material_(material), volumenUsado_(volumenUsado) {}

inline float MaterialUsado::getVolumenUsado() const { return volumenUsado_; }
inline Material MaterialUsado::getMaterial() const { return material_; }

inline void MaterialUsado::setVolumenUsado(float volumenUsado)
{
    volumenUsado_ = volumenUsado;
}

inline void MaterialUsado::setMaterial(Material material)
{
    material_ = material;
}

#endif
