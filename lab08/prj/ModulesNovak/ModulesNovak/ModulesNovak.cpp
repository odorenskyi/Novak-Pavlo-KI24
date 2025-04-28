#include "ModulesNovak.h"
#include <cmath>

double s_calculation(double x, double y, double z) {
    return sqrt(1 + fabs(cos(x))) + 2 * 3.14 + pow(((2 - x) / sin(x)), 2);
}
