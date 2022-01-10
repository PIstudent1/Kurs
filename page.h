#ifndef PAGE_H
#define PAGE_H
#include <iostream>
#include <vector>
#include <element.h>

class Page
{
private:
    std::string name;
    std::vector<Element*> elems;
public:
    Page();
    Page(std::string name);
    Page(std::string name, std::vector<Element*> elems);

    std::string getName();
    std::vector<Element*> getElements();

    int setName(std::string name);
    int setElements(std::vector<Element*> elems);

    int addElement(Element* elem);
    int delElement(unsigned long long posNum);

    virtual std::string display();
};

#endif // PAGE_H
