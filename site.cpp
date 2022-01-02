#include "site.h"
#include <iostream>
#include <vector>
#include "page.h"

using namespace std;

Site::Site()
{
    name = "Empthy";
    templ = "";
}

Site::Site(string nName, string nTempl)
{
    name = nName;
    templ = nTempl;
}

Site::Site(string nName, string nTempl, vector<Page> nPages)
{
    name = nName;
    templ = nTempl;
    pages = nPages;
}

int Site::addPage(Page page)
{
    pages.push_back(page);
    return 0;
}

ostream& operator<< (ostream &out, const Site site)
{
    return out;
}
