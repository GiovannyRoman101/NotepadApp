// makes sure header files dont get uploaded more than once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//provides main application window where ui is built
#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>

// uses the standard ui in this program it will be mainwindow.ui
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    // base class for all Q objects
    //handle events and each object will be on its own thread
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_As_triggered();

    void on_actionPrint_triggered();

    void on_actionExit_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionUndo_triggered();

private:
    Ui::MainWindow *ui;
    QString currentfile = "";
};

#endif // MAINWINDOW_H
