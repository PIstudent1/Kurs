#include "page.h"
#include <iostream>
#include <vector>
#include <element.h>

using namespace std;

Page::Page()
{
    name = "";
}

Page::Page(string nName)
{
    name = nName;
}

Page::Page(string nName, vector<Element*> nElems)
{
    name = nName;
    elems = nElems;
}

string Page::getName(){
    return name;
}

vector<Element*> Page::getElements(){
    return elems;
}

int Page::setName(string nName){
    if(nName == "" || nName == "\n" || nName[0] == ' '){
        return 1;
    }
    name = nName;
    return 0;
}

int Page::setElements(vector<Element*> nElems){
    elems = nElems;
    return 0;
}

int Page::addElement(Element* elem)
{
    elems.push_back(elem);
    return 0;
}

int Page::delElement(unsigned long long num)
{
    if(num >= elems.size()) return 1;
    elems.erase(elems.begin() + num);
    return 0;
}

string Page::display(){
    string out = "<body id=\"" + name + "\">";
    for(unsigned long long i = 0; i < elems.size(); i++){
        out += elems[i]->display();
    }
    out += "</body></html>";
    return out;
}
