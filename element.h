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

    std::string getName();
    std::string getStateStart();
    std::string getStateEnd();
    std::string getCssClasses();
    std::string getValue();

    int setName(std::string name);
    int setStateStart(std::string stateStart);
    int setStateEnd(std::string stateEnd);
    int setCssClasses(std::string cssClasses);
    int setValue(std::string value);

    friend std::ostream& operator<< (std::ostream &out, const Element elem);
};

#endif // ELEMENT_H
