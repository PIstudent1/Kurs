#ifndef PARAGRAPH_H
#define PARAGRAPH_H
#include "element.h"


class Paragraph : public Element
{
public:
    Paragraph();
    Paragraph(std::string name, std::string cssClasses, std::string value);
};

#endif // PARAGRAPH_H
