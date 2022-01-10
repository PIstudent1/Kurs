#include "anchor.h"
#include <iostream>

using namespace std;

Anchor::Anchor() : Element()
{
    state = "a";
}

Anchor::Anchor(string name, string nCssClasses, string nValue, string nHref)
    : Element(name, nCssClasses, nValue)
{
    href = nHref;
    state = "a";
}

string Anchor::getHref(){
    return href;
}

int Anchor::setHref(string nHref){
    if(nHref == "" || nHref == "\n" || nHref[0] == ' '){
        return 1;
    }
    href = nHref;
    return 0;
}

string Anchor::display(){
    return "<" + state + " class=\"" + cssClasses + "\"" + " href=\"" + href + "\"" + " id=\"" + name + "\">" + value + "</" + state + ">";
}
