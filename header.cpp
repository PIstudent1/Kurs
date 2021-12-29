#include "header.h"

using namespace std;

Header::Header() : Element()
{
    value = "Empthy";
}

Header::Header(string nName, int nPosNum, string nValue) : Element(nName, nPosNum){
    value = nValue;
    stateStart = "<h3>";
    stateEnd = "</h3>";
    cssClasses = "";// добавить сюда
}
