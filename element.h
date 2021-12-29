#ifndef ELEMENT_H
#define ELEMENT_H
#include <iostream>

class Element
{
protected:
    std::string name;//p_1
    int positionNumber;//0
    std::string stateStart; //<p class="">
    std::string stateEnd;//</p>
    std::string cssClasses;//classes
public:
    Element();
    Element(std::string name, int posNum);
    int Export();
};

#endif // ELEMENT_H
