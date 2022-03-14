#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
signals:
    void mySignal (int s);
public slots:
    void slotTextToInt(QString str) {
        int s =str.toInt();
        emit mySignal(s);
    }
private slots:
    void on_actionAbout_triggered();
};

#endif // MAINWINDOW_H
