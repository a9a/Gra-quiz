#ifndef LISTAPYTAN_H
#define LISTAPYTAN_H
#include <pytanie.h>
#include <QList>
#include <QFile>
/**
 * @brief The ListaPytan class
 */
class ListaPytan
{
public:
    ListaPytan();
    QList <Pytanie> lista;
    ///Max liczba pytan
    int maxPytan;
   //void wczytajPytania(QFile plik);
};

#endif // LISTAPYTAN_H
