#include "paragraph.h"

Paragraph::Paragraph() : Element()
{
    state = "p";
}

Paragraph::Paragraph(std::string name, std::string cssClasses, std::string value)
    : Element(name, cssClasses, value)
{
    state = "p";
}
