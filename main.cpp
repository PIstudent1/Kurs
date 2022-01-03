#include "mainwindow.h"

#include <QApplication>
#include "module.h"
#include "element.h"
#include "page.h"
#include "site.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Element e = Element("n", "<p>", "</p>", "", "Ура");
    Module m = Module("m", 0, "");
    m.addElement(e);
    Page p = Page("Index");
    p.addModule(m);
    Site s = Site("Test", "templ");
    s.addPage(p);
    s.exp();

    return a.exec();
}
