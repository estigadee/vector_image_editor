#pragma once

#include <iostream>

class VectorFigure
{
public:
    VectorFigure();
    VectorFigure(unsigned int id, int x1, int x2, int y1, int y2);
    VectorFigure(const VectorFigure &other);
    VectorFigure &operator=(const VectorFigure &other);
    ~VectorFigure();

private:
    unsigned int id_m;
    int x1_m;
    int x2_m;
    int y1_m;
    int y2_m;
}