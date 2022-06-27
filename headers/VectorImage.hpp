#pragma once

#include <iostream>
#include "VectorElement.hpp"
#include "VectorFigure.hpp"

class VectorImage
{
public:
    VectorImage();
    VectorImage(VectorFigure *figure, VectorElement *element, unsigned int number_of_figures, unsigned int number_of_elements);
    VectorImage(const VectorImage &other);
    ~VectorImage();

    void open(file);
    VectorFigure &create(char *figure_type, char *figure_components);

    VectorFigure &group(char *region);
    void ungroup(unsigned int element_id);

    void translate(int element_id = -1, int vertical, int horizontal);
    void scale(int element_id = -1, int width_coeff, int height_coeff);
    void rotate(int element_id = -1, int angle);
    void bring_forward(unsigned int element_id, unsigned int n);
    void send_backward(unsigned int element_id, unsigned int n);

    void save_as(char *format);
    void save();
    void help();

// ---------------------------------------------------------------------- //

    VectorFigure* get_figures();
    VectorElement* get_elements();
    void set_figure(VectorFigure* figure);
    void set_element(VectorElement* element);

    VectorFigure* find_el_by_id(unsigned int element_id);
    VectorFigure* resize(unsigned int size);
    VectorElement* resize(unsigned int size);

private:
    void resize(unsigned int size);

    VectorFigure *figure_m;
    VectorElement *element_m;

    unsigned int number_of_figures_m;
    unsigned int number_of_elements_m;
}