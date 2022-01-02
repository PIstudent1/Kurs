#ifndef ELEMENT_H
#define ELEMENT_H
#include <iostream>

class Element
{
private:
    std::string name;
    std::string stateStart;
    std::string stateEnd;
    std::string cssClasses;
    std::string value;
public:
    Element();
    Element(std::string name, std::string nStateStart, std::string nStateEnd, std::string nCssClasses, std::string nValue);

    friend std::ostream& operator<< (std::ostream &out, const Element elem);
};

#endif // ELEMENT_H
