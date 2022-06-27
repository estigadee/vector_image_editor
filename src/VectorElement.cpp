#include "VectorElement.hpp"

VectorElement(): id_m(-1), number_of_figures_m(0), figure_m(nullptr) {}

VectorElement::VectorElement(unsigned int id, unsigned int number_of_figures, VectorFigure *figure) : id_m(id),
                                                                                                      number_of_figures_m(number_of_figures_m),
                                                                                                      figure_m(figure) {}

VectorElement::VectorElement(const VectorElement &other)
{
    id_m = other.id_m;
    number_of_figures_m = other.number_of_figures_m;
    figure_m = new VectorElement[number_of_figures_m];

    for (unsigned int i = 0; i < number_of_figures_m; i++)
    {
        figure_m[i] = other.figure_m[i];
    }
}

VectorElement::VectorElement &operator=(const VectorElement &other)
{
    if (this == &other)
    {
        return *this;
    }
    
    delete [] figure_m;

    id_m = other.id_m;
    number_of_figures_m = other.number_of_figures_m;
    figure_m = new VectorFigure[number_of_figures_m];

    for (unsigned int i = 0; i < number_of_figures_m; i++)
    {
        figure_m[i] = other.figure_m[i];
    }
    
    return *this;
}

VectorElement::~VectorElement()
{
    delete[] figure_m;
}