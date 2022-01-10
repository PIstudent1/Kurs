#ifndef SITE_H
#define SITE_H
#include <iostream>
#include <vector>
#include "page.h"

class Site
{
private:
    std::string name;
    std::string templ;
    std::vector<Page> pages;
public:
    Site();
    Site(std::string name, std::string templ);
    Site(std::string name, std::string templ, std::vector<Page> pages);

    std::string getName();
    std::string getTempl();
    std::vector<Page> getPages();

    int setName(std::string name);
    int setTempl(std::string templ);
    int setPages(std::vector<Page> pages);

    int addPage(Page page);
    int delPage(unsigned long long posNum);

    int exp();
};
#endif // SITE_H
