#ifndef ANCHOR_H
#define ANCHOR_H
#include "element.h"

class Anchor : public Element
{
private:
    std::string href;
public:
    Anchor();
    Anchor(std::string name, std::string nCssClasses, std::string nValue, std::string href);

    std::string getHref();
    int setHref(std::string nHref);

    virtual std::string display() override;
};

#endif // ANCHOR_H
