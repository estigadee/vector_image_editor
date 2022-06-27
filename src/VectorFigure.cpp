#include "VectorFigure.hpp"

VectorFigure::VectorFigure() : id_m(-1) {}
VectorFigure::VectorFigure(unsigned int id, int x1, int x2, int y1, int y2) : id_m(id),
                                                                              x1_m(x1),
                                                                              x2_m(x2),
                                                                              y1_m(y1),
                                                                              y2_m(y2) {}
VectorFigure::VectorFigure(const VectorFigure &other) : id_m(other.id_m),
                                                        x1_m(other.x1),
                                                        x2_m(other.x2),
                                                        y1_m(other.y1),
                                                        y2_m(other.y2);

VectorFigure::VectorFigure &operator=(const VectorFigure &other)
{
    if (this == &other)
    {
        return *this;
    }

    id_m = other.id_m;
    x1_m = other.x1_m;
    x2_m = other.x2_m;
    y1_m = other.y2_m;
    return *this;
}

VectorFigure::~VectorFigure() {}