#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <game.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(std::string str, int sz = 40,  QWidget *parent = nullptr);
    ~MainWindow();

    void paintEvent(QPaintEvent* event);
    void mousePressEvent(QMouseEvent* event);
    void keyPressEvent(QKeyEvent* event);


private:
    Ui::MainWindow *ui; 
    int widthMap;
    int heightMap;
    int caseDimension;
    Game game;
    QSize size;
};

#endif // MAINWINDOW_H
