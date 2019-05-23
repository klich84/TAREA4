#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_BT_1_clicked();

    void on_BT_2_clicked();

    void on_etiqueta_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;
    QString Aumentar = "AUMENTO";
    QString Disminuir = "DISMINUYO";
    int cuenta = 0;
};

#endif // MAINWINDOW_H
