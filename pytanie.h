#ifndef PYTANIE_H
#define PYTANIE_H
#include <QString>
#include <odpowiedz.h>
/**
 * \file pytanie.h
 * @brief The Pytanie class
 */
class Pytanie
{
public:
    Pytanie();
public:
    ///numer pytania
    int idPytania;
    ///Treść pytania
    QString trescPytania;
    ///Tablica odpowiedzi
    Odpowiedz tab[4];
    ///id prawidlowej odpoweidzi
    int prawidlowaOdpowiedz;
};

#endif // PYTANIE_H
