#include "element.h"
#include "iostream"

using namespace std;

Element::Element()
{
    name = "Empthy";
    positionNumber = 0;
    stateStart = "<div>";
    stateEnd = "</div>";
    cssClasses = "";
}

Element::Element(string nName, int nPosNum, string nStateStart, string nStateEnd, string nCssClasses, string nValue)
{
    name = nName;
    positionNumber = nPosNum;
    stateStart = nStateStart;
    stateEnd = nStateEnd;
    cssClasses = nCssClasses;
    value = nValue;
}

ostream& operator<< (ostream &out, const Element elem){
    string tmp;
    tmp = elem.stateStart;
    tmp.insert(tmp.length()-1, " class=\"" + elem.cssClasses + "\" id=\"" + elem.name + "\"");
    out << tmp << elem.value << elem.stateEnd;

    return out;
}
