#include <iostream>
#include "FiguresList.h"
#include "Triangle.h"
#include "Trapeze.h"
#include "Complex.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    figuresList li;
    Figure* Triangle = new triangle(1, 1, 3, 4);
    Figure* Trapeze = new trapeze(10, 10, 6, 8, 4);
    Figure* Complex = new complex(new triangle(12, 12, 5, 7), new trapeze(20, 20, 5, 9, 3));
    Triangle->draw();
    Triangle->replace(5, 4);
    std::cout << '\n' << '\n';
    Trapeze->draw();
    li.add_f({ Triangle, Trapeze, Complex });
    li.view();
}
