#ifndef ELEMENT_H
#define ELEMENT_H
#include <iostream>

class Element
{
protected:
    std::string name;//Название элемента
    int positionNumber;//Порядковый номер элемента
    std::string state;//Что представляет из себя элемент
public:
    Element();
    Element(std::string name, int posNum, std::string state);
};

#endif // ELEMENT_H
