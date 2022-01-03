#include <iostream>
#include <vector>
#include "element.h"
#include "module.h"

using namespace std;

Module::Module()
{
    name = "";
    positionNumber = 0;
}

Module::Module(string nName, int nPosNum, string nCssClasses){
    name = nName;
    positionNumber = nPosNum;
    cssClasses = nCssClasses;
}

Module::Module(string nName, int nPosNum, string nCssClasses, vector<Element> nElems){
    name = nName;
    positionNumber = nPosNum;
    elems = nElems;
    cssClasses = nCssClasses;
}

string Module::getName(){
    return name;
}

int Module::getPosNum(){
    return positionNumber;
}

string Module::getCssClasses(){
    return cssClasses;
}

vector<Element> Module::getElems(){
    return elems;
}

int Module::setName(string nName){
    if(nName == "" || nName == "\n" || nName[0] == ' '){
        return 1;
    }
    name = nName;
    return 0;
}

int Module::setPosNum(int nPositionNumber){
    if(nPositionNumber < 0) return 1;
    positionNumber = nPositionNumber;
    return 0;
}

int Module::setCssClasses(string nCssClasses){
    cssClasses = nCssClasses;
    return 0;
}

int Module::setElems(vector<Element> nElems){
    elems = nElems;
    return 0;
}

ostream& operator<< (ostream &out, const Module module){
    out << "<div id=\"" << module.name << "\" class=\"" << module.cssClasses << "\">";
    for(unsigned long long i = 0; i < module.elems.size(); i++){
        out << module.elems[i] << "\n";
    }
    out << "</div>";
    return out;
}

int Module::addElement(Element nElement){
    elems.push_back(nElement);
    return 0;
}
