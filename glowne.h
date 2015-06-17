#ifndef GLOWNE_H
#define GLOWNE_H
#include <QMainWindow>
#include <listapytan.h>

namespace Ui {

class Glowne;
}
/**
 * @brief The Glowne class
 */
class Glowne : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Glowne
     * @param parent
     */
    explicit Glowne(QWidget *parent = 0);
    ~Glowne();
    ///Lista pytan
    ListaPytan lista;



private slots:
    /**
     * @brief on_lineEdit_editingFinished
     */
    void on_lineEdit_editingFinished();
    /**
     * @brief on_lineEdit_textChanged
     * @param arg1
     */
    void on_lineEdit_textChanged(const QString &arg1);
    /**
     * @brief on_pushButtonNowaGra_clicked
     */
    void on_pushButtonNowaGra_clicked();
    /**
     * @brief on_lineEdit_returnPressed
     */
    void on_lineEdit_returnPressed();

private:
    Ui::Glowne *ui;
};

#endif // GLOWNE_H
