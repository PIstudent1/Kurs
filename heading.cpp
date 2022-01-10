#include "heading.h"

using namespace std;

Heading::Heading() : Element()
{
    size = 6;
    state = "h";
}

Heading::Heading(std::string name, std::string nCssClasses, std::string nValue, int nSize)
    : Element(name, nCssClasses, nValue)
{
    if (nSize >= 1 && nSize <= 6) size = nSize;
    else size = 6;
    state = "h";
}

int Heading::getSize(){
    return size;
}

int Heading::setSize(int nSize){
    if (nSize >= 1 && nSize <= 6){
        size = nSize;
        return 0;
    }
    else size = 6;
    return 1;
}

string Heading::display(){
    return "<" + state + to_string(size) + " class=\"" + cssClasses + "\"" + " id=\"" + name + "\">" + value + "</" + state + to_string(size) + ">";
}
