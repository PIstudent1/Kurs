#ifndef PAGE_H
#define PAGE_H
#include <iostream>
#include <vector>
#include <module.h>

class Page
{
private:
    std::string name;
    std::vector<Module> modules;
public:
    Page();
    Page(std::string name);
    Page(std::string name, std::vector<Module> modules);
    int addModule(Module module);

    friend std::ostream& operator<< (std::ostream &out, const Page page);
};

#endif // PAGE_H
