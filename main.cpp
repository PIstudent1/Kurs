#include "mainwindow.h"

#include <QApplication>
#include "anchor.h"
#include "element.h"
#include "heading.h"
#include "page.h"
#include "paragraph.h"
#include "site.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Site s = Site("Test", "templ");
    Page p = Page("Page-test");
    Heading* he = new Heading("heading-1", "", "Заголовок", 2);
    Paragraph* pa = new Paragraph("p-1", "", "asdasdasdasdasd");
    Anchor* aa = new Anchor("a-1", "", "Ссылка", "href");
    p.addElement(he);
    p.addElement(pa);
    p.addElement(aa);
    s.addPage(p);
    s.exp();

    delete he;
    delete pa;
    delete aa;

    return a.exec();
}
