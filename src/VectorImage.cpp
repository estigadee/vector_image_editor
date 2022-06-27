#include "VectorImage.hpp"

VectorFigure *get_figures()
{
    return *figure_m;
}

VectorElement *get_elements()
{
    return *element_m;
}

void set_figure(VectorFigure *figure)
{
    
}

void set_element(VectorElement *element)
{
}

VectorFigure *find_el_by_id(unsigned int element_id)
{
}

VectorFigure *resize(unsigned int size)
{
    VectorFigure *fig = new VectorFigure[size];

    for (unsigned i = 0; i < number_of_figures_m; i++)
    {
        fig[i] = figure_m[i];
    }
    delete[] figure_m;
    return *fig;
}

VectorElement *resize(unsigned int size)
{
    VectorElement *elem = new VectorElement[size];

    for (unsigned i = 0; i < number_of_figures_m; i++)
    {
        elem[i] = element_m[i];
    }
    delete[] element_m;
    return *elem;
}

void translate(int element_id = -1, int vertical, int horizontal)
{
}

void scale(int element_id = -1, int width_coeff, int height_coeff)
{
    if (element_id > -1)
    {
    }
    else
    {
    }
}

void rotate(int element_id = -1, int angle)
{
}

//---------------------------------------------------------------------------//

VectorImage::VectorImage() : figure_m(nullptr), element_m(nullptr), number_of_elements_m(0), number_of_figures_m(0)
{
}

VectorImage::VectorImage(VectorFigure *figure, VectorElement *element, unsigned int number_of_figures, unsigned int number_of_elements) : number_of_elements_m(number_of_elements),
                                                                                                                                          number_of_figures_m(number_of_figures)
{
    delete[] figure_m;
    delete[] element_m;

    figure_m = new VectorFigure[number_of_figures_m];
    element_m = new VectorElement[number_of_elements_m];

    for (unsigned int i = 0; i < number_of_figures_m; i++)
    {
        figure_m[i] = figure[i];
    }

    for (unsigned int i = 0; i < number_of_elements_m; i++)
    {
        element_m[i] = element[i];
    }
}

VectorImage::VectorImage(const VectorImage &other)
{
    number_of_figures_m = other.number_of_figures_m;
    number_of_elements_m = other.number_of_elements_m;

    delete[] figure_m;
    delete[] element_m;

    figure_m = new VectorFigure[number_of_figures_m];
    element_m = new VectorElement[number_of_elements_m];

    for (unsigned int i = 0; i < number_of_figures_m; i++)
    {
        figure_m[i] = other.figure_m[i];
    }

    for (unsigned int i = 0; i < number_of_elements_m; i++)
    {
        element_m[i] = other.element_m[i];
    }
}

VectorImage::~VectorImage()
{
    delete[] figure_m;
    delete[] element_m;
}