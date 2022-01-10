#ifndef ELEMENT_H
#define ELEMENT_H
#include <iostream>

class Element
{
protected:
    std::string name;
    std::string state;
    std::string cssClasses;
    std::string value;
public:
    Element();
    Element(std::string name, std::string nCssClasses, std::string nValue);

    std::string getName();
    std::string getState();
    std::string getCssClasses();
    std::string getValue();

    int setName(std::string name);
    int setState(std::string nState);
    int setCssClasses(std::string cssClasses);
    int setValue(std::string value);

    virtual std::string display();
};

#endif // ELEMENT_H
