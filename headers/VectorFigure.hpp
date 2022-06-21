#pragma once

#include <iostream>

class VectorFigure {
    public:
    VectorFigure();
    VectorFigure(unsigned int id);
    VectorFigure(const VectorFigure &other);
    VectorFigure &operator=(const VectorFigure &other);
    ~VectorFigure();

    private:
    unsigned int id_m;
}