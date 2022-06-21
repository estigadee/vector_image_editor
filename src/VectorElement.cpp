#include "VectorElement.hpp"

VectorElement(){}

VectorElement::VectorElement(unsigned int id, unsigned int number_of_figures, VectorFigure* figure):
id_m(id), 
number_of_figures_m(number_of_figures_m), 
figure_m(figure){}

VectorElement::VectorElement(const VectorElement &other){
    id_m = other.id_m;
    figure_m = new VectorElement[other.number_of_figures_m];

    for(unsigned int i = 0; i < number_of_figures_m; i++){
        figure_m = other.figure_m;
    }
}

VectorElement::~VectorElement(){
    delete [] figure_m;
}