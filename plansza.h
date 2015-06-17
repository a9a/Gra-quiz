#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <listapytan.h>


namespace Ui {
class MainWindow;
}
/**
 * @brief The Plansza class
 */
class Plansza : public QMainWindow
{
    Q_OBJECT

public:
    explicit Plansza(QWidget *parent = 0, QString name="", int liczbaP=5);
    ~Plansza();
    ///nazwa Gracza
    QString nameUser;
    ///Liczba pytan w pliku
    int liczbaPytanMax;

    ///numer pytania
    int pytanie;
    ///Lista pytan
    ListaPytan lista;
    ///Liczb pytan jaka wybrał użytkownik
    int liczbaPytanWybrana;
    ///zmienna zliczająca liczbę pytań na które odpowiedział gracz
    int licznik;
    ///losowana liczba
    int losowa;
private slots:
    void on_pushButton_A_clicked();

    void on_pushButton_B_clicked();

    void on_pushButton_C_clicked();

    void on_pushButton_D_clicked();

private:
    Ui::MainWindow *ui;
    void losujPytanie();
    void odp(int id);

};

#endif // MAINWINDOW_H
