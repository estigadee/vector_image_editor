#pragma once

#include <iostream>

class VectorElement {

    public:

    VectorElement();
    VectorElement(unsigned int id, unsigned int number_of_figures, VectorFigure* figure);
    VectorElement(const VectorElement &other);
    ~VectorElement();

    private:
    unsigned int id_m;
    unsigned int number_of_figures_m;
    VectorFigure* figure_m;
}