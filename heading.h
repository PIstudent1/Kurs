#ifndef HEADING_H
#define HEADING_H
#include "element.h"


class Heading : public Element
{
private:
    int size;
public:
    Heading();
    Heading(std::string name, std::string nCssClasses, std::string nValue, int nSize);

    int getSize();
    int setSize(int nSize);

    virtual std::string display() override;
};

#endif // HEADING_H
