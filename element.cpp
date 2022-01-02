#include "element.h"
#include "iostream"

using namespace std;

Element::Element()
{
    name = "Empthy";
    stateStart = "<div>";
    stateEnd = "</div>";
    cssClasses = "";
}

Element::Element(string nName, string nStateStart, string nStateEnd, string nCssClasses, string nValue)
{
    name = nName;
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

string Element::getName(){
    return name;
}

string Element::getStateStart(){
    return stateStart;
}

string Element::getStateEnd(){
    return stateEnd;
}

string Element::getCssClasses(){
    return cssClasses;
}

string Element::getValue(){
    return value;
}

int Element::setName(string nName){
    if(nName == "" || nName == "\n" || nName[0] == ' '){
        return 1;
    }
    name = nName;
    return 0;
}

int Element::setStateStart(string nStateStart){
    if(nStateStart == "" || nStateStart == "\n" || nStateStart[0] == ' '){
        return 1;
    }
    stateStart = nStateStart;
    return 0;
}

int Element::setStateEnd(string nStateEnd){
    if(nStateEnd == "" || nStateEnd == "\n" || nStateEnd[0] == ' '){
        return 1;
    }
    stateEnd = nStateEnd;
    return 0;
}

int Element::setCssClasses(string nCssClasses){
    cssClasses = nCssClasses;
    return 0;
}

int Element::setValue(string nValue){
    value = nValue;
    return 0;
}
