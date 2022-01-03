#include "site.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <dir.h>
#include <QString>
#include <QFile>
#include <QDir>
#include <QJsonObject>
#include <QJsonDocument>
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

string Site::getName(){
    return name;
}

string Site::getTempl(){
    return templ;
}

vector<Page> Site::getPages(){
    return pages;
}

int Site::setName(string nName){
    if(nName == "" || nName == "\n" || nName[0] == ' '){
        return 1;
    }
    name = nName;
    return 0;
}

int Site::setTempl(string nTempl){
    if(nTempl == "" || nTempl == "\n" || nTempl[0] == ' '){
        return 1;
    }
    templ = nTempl;
    return 0;
}

int Site::setPages(vector<Page> nPages){
    pages = nPages;
    return 0;
}

int Site::addPage(Page page)
{
    pages.push_back(page);
    return 0;
}

int Site::exp(){
    string pathdir = "./"+name;

    QDir dir;
    dir.mkdir(QString::fromStdString(pathdir));
    dir.mkdir(QString::fromStdString(pathdir) + "/css");
    dir.mkdir(QString::fromStdString(pathdir) + "/js");

    dir = QDir("./css");
    QFileInfoList list = dir.entryInfoList();
    dir.cdUp();

    foreach (QFileInfo finfo, list) {
          QString nameF = finfo.absolutePath() + "/" + finfo.fileName();
          QString dest = dir.absolutePath() + "/" + QString::fromStdString(name) + "/css/" + finfo.fileName();
          cout << nameF.toStdString() << endl;
          cout << dest.toStdString() << endl;
          QFile::copy(nameF,dest);
    }

    dir = QDir("./js");
    list = dir.entryInfoList();
    dir.cdUp();

    foreach (QFileInfo finfo, list) {
          QString nameF = finfo.absolutePath() + "/" + finfo.fileName();
          QString dest = dir.absolutePath() + "/" + QString::fromStdString(name) + "/js/" + finfo.fileName();
          cout << nameF.toStdString() << endl;
          cout << dest.toStdString() << endl;
          QFile::copy(nameF,dest);
    }

    QString val;
    QFile file;
    file.setFileName(QString::fromStdString(templ) + ".json");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    val = file.readAll();
    file.close();

    QJsonDocument doc = QJsonDocument::fromJson(val.toUtf8());
    QJsonObject json = doc.object();

    QString nav = "";
    for(unsigned long long i = 0; i < pages.size(); i++){
        QString tmp = json["li"].toString();
        tmp.replace("#site_page_name", QString::fromStdString(pages[i].getName()));
        tmp.replace("#site_page_a", QString::fromStdString(pages[i].getName())+".html");
        nav += tmp;
    }

    for(unsigned long long i = 0; i < pages.size(); i++){
        ofstream fout;
        fout.open(pathdir+"/"+pages[i].getName()+".html");

        QString tmp = json["head"].toString();
        tmp.replace("#site_page_name", QString::fromStdString(pages[i].getName()));
        fout << tmp.toStdString();

        tmp = json["header"].toString();
        tmp.replace("#site_name", QString::fromStdString(name));
        tmp.replace("#site_pages", nav);
        tmp.replace("#site_page_name", QString::fromStdString(pages[i].getName()));
        fout << tmp.toStdString();

        fout << pages[i];

        tmp = json["footer"].toString();
        fout << tmp.toStdString();

        fout.close();
    }

    return 0;
}
