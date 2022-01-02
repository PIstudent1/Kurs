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
    int addPage(Page page);

    friend std::ostream& operator<< (std::ostream &out, const Site site);
};
#endif // SITE_H
