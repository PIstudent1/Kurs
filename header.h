#ifndef HEADER_H
#define HEADER_H

#include "element.h"

class Header : public Element
{
private:
    std::string value;
public:
    Header();
    Header(std::string nName, int nPosNum, std::string nValue);
};

#endif // HEADER_H
