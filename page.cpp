#include "page.h"
#include <iostream>
#include <vector>
#include <module.h>

using namespace std;

Page::Page()
{
    name = "";
}

Page::Page(string nName)
{
    name = nName;
}

Page::Page(string nName, vector<Module> nModules)
{
    name = nName;
    modules = nModules;
}

string Page::getName(){
    return name;
}

vector<Module> Page::getModules(){
    return modules;
}

int Page::setName(string nName){
    if(nName == "" || nName == "\n" || nName[0] == ' '){
        return 1;
    }
    name = nName;
    return 0;
}

int Page::setModules(vector<Module> nModules){
    modules = nModules;
    return 0;
}

int Page::addModule(Module module)
{
    modules.push_back(module);
    return 0;
}

ostream& operator<< (ostream &out, const Page page){
    out << "<body id=\"" << page.name << "\">";
    for(unsigned long long i = 0; i < page.modules.size(); i++){
        out << page.modules[i];
    }
    out << "</body></html>";
    return out;
}
