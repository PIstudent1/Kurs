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

int Page::addModule(Module module)
{
    modules.push_back(module);
}

ostream& operator<< (ostream &out, const Page page){
    //вставить head и тд
    out << "<body id=\"" << page.name << "\">";
    for(int i = 0; i < page.modules.size(); i++){
        out << page.modules[i];
    }
    out << "</body></html>";
    return out;
}
