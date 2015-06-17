#include "plansza.h"
#include <QApplication>
#include <listapytan.h>
#include <QtDebug>
#include <qtextcodec.h>
#include <glowne.h>
/**
 * \mainpage
 * \par Gra
 * Gra Quiz.
 * \author Osinska Agnieszka
 * \date 2015.06.07
 * \version 2.0
 * \a osinska@student.agh.edu.pl
 */
int main(int argc, char *argv[])
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    QApplication a(argc, argv);
     Glowne w;
    w.show();
    //ListaPytan nowaLista;
    //qDebug()<<"żół";

    return a.exec();
}
