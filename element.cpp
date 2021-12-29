#include "element.h"

using namespace std;

Element::Element()
{
    name = "Empthy";
    positionNumber = 0;
    state = "<div></div>";
}

Element::Element(string nName, int nPosNum, std::string nState)
{
    name = nName;
    positionNumber = nPosNum;
    state = nState;
}
