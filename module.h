#ifndef MODULE_H
#define MODULE_H
#include <iostream>
#include <vector>
#include "element.h"

class Module
{
private:
    std::string name;
    int positionNumber;
    std::string cssClasses;
    std::vector<Element> elems;
public:
    Module();
    Module(std::string name, int posNum, std::string cssClasses);
    Module(std::string name, int posNum, std::string cssClasses, std::vector<Element> elems);

    friend std::ostream& operator<< (std::ostream &out, const Module module);
};

#endif // MODULE_H
