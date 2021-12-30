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

ostream& operator<< (ostream &out, const Module module){
    out << "<div id=\"" << module.name << "\" class=\"" << module.cssClasses << "\">";
    for(int i = 0; i < module.elems.size(); i++){
        out << module.elems[i];
    }
    out << "</div>";
    return out;
}
