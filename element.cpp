#include "element.h"

using namespace std;

Element::Element()
{
    name = "Empthy";
    positionNumber = 0;
    stateStart = "<div>";
    stateEnd = "</div>";
    cssClasses = "";
}

Element::Element(std::string nName, int nPosNum)
{
    name = nName;
    positionNumber = nPosNum;
    stateStart = "";
    stateEnd = "";
    cssClasses = "";
}

int Element::Export(){


    return 0;
}
