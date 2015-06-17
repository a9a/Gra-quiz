#include "listapytan.h"
#include <QList>
#include <pytanie.h>
#include <QFile>
#include <Qstring>
#include <string>
#include <QtDebug>
#include <qtextcodec.h>
#include <QTextCodec>
/**
 * @brief ListaPytan::ListaPytan
 * Konstruktor
 */
ListaPytan::ListaPytan()
{
    maxPytan=0;
    //qDebug()<<"konstruktor ListaPytan";
    QFile pytania(":/new/prefix1/pytania.txt");
    if (!pytania.open(QIODevice::ReadOnly))
     {
        qDebug()<<"Niemozna otworzyc";
    }
    else{
        QString tresc;
        Odpowiedz odpowiedz;
        QString idPytania;
        QString idOdpowiedzi;
        Pytanie pytanie;


    //qDebug()<<"Adasd";
        while(!pytania.atEnd()){
            idPytania=pytania.readLine();
            pytanie.idPytania=idPytania.toInt();
            //qDebug()<<pytanie.idPytania;
            idOdpowiedzi=pytania.readLine();
            pytanie.prawidlowaOdpowiedz=idOdpowiedzi.toInt();
            tresc=pytania.readLine();
            pytanie.trescPytania=tresc;
            for(int i=0; i<4;i++){

                pytanie.tab[i].idPytania=pytanie.idPytania;
                if(i==0){idOdpowiedzi='a';}
                if(i==1){idOdpowiedzi='b';}
                if(i==2){idOdpowiedzi='c';}
                if(i==3){idOdpowiedzi='d';}
                pytanie.tab[i].trescOdp=pytania.readLine();



            }

            lista.append(pytanie);
            maxPytan++;

        }
    }
    qDebug()<<"Lista pytan w pliku-"<<maxPytan;

}

//void ListaPytan::wczytajPytania(QFile plik){
//    QString tresc;
//    QString odpowiedz;
//    QString idPytania;
//    QString idOdpowiedzi;
//    Pytanie pytanie;

//    while(!plik.efo){
//        getline( plik, idPytania,'.');
//        pytanie.idPytania=(int)idPytania;
//        getline( plik, idOdpowiedzi,'|');
//        pytanie.prawidlowaOdpowiedz=(char)idOdpowiedzi;
//        getline( plik, tresc,'|');
//        pytanie.trescPytania=tresc;
//        for(int i=0; i<4; i++){
//        getline( plik, pytanie.tab[i],'|');
//        }
//    }

//}
