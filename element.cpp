#include "element.h"
#include "iostream"

using namespace std;

Element::Element()
{
    name = "Empthy";
    state = "";
    cssClasses = "";
}

Element::Element(string nName, string nCssClasses, string nValue)
{
    name = nName;
    cssClasses = nCssClasses;
    value = nValue;
}

string Element::display(){
    return "<" + state + " class=\"" + cssClasses + "\"" + " id=\"" + name + "\">" + value + "</" + state + ">";
}

string Element::getName(){
    return name;
}

string Element::getState(){
    return state;
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

int Element::setState(string nState){
    if(nState == "" || nState == "\n" || nState[0] == ' '){
        return 1;
    }
    state = nState;
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
