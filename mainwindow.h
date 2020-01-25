#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;
    static void setCursorLabelCoord(QMouseEvent*);

private slots:
    void dockWidgetInit();
    void propertyWidgetInit();
    void shapeToolSelected();
    void lineToolSelected();
    void textToolSelected();
    void noPropertyToolSelected();
    void helpButtonClicked();
    void toolButtonClicked();
    void propertyButtonClicked();
    void on_strokeColorButton_clicked();

    void on_fillColorButton_clicked();

    void on_strokeColorButton2_clicked();

private:
    Ui::MainWindow *ui;
    void initStatusBar();
};
#endif // MAINWINDOW_H
