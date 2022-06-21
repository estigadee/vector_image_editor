#include "VectorFigure.hpp"

VectorFigure::VectorFigure(): id_m(-1){}
VectorFigure::VectorFigure(): id_m(id){}
VectorFigure::VectorFigure(const VectorFigure &other): id_m(other.id_m);

VectorFigure::VectorFigure &operator=(const VectorFigure &other){
    if (this == &other){
        return *this;
    }

    id_m = other.id_m;
    return *this;    
}

VectorFigure::~VectorFigure(){}