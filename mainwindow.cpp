#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QMouseEvent>
#include <QDebug>
#include <QRect>
#include <QImage>
#include <fstream>



using namespace std;

MainWindow::MainWindow(string str, int sz, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    game(str),
    caseDimension(sz)
{
    heightMap = game.getMapMatrix().size();
    widthMap = game.getMapMatrix()[0].size();
    QSize size(widthMap*caseDimension + 100,heightMap*caseDimension + 30);
    ui->setupUi(this);
    setFixedSize(size);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    for(auto i : game.getMapMatrix()){
        for (auto j : i){
            painter.drawImage(QRect((widthMap*caseDimension+100)/2 - caseDimension*widthMap/2 + j->getPosX()*caseDimension, (heightMap*caseDimension +30)/2 - caseDimension*heightMap/2 + j->getPosY()*caseDimension, caseDimension, caseDimension), QImage(":/Img/Images/Plain.gif"));
            painter.drawImage(QRect((widthMap*caseDimension+100)/2 - caseDimension*widthMap/2 + j->getPosX()*caseDimension, (heightMap*caseDimension +30)/2 - caseDimension*heightMap/2 + j->getPosY()*caseDimension, caseDimension, caseDimension), j->getImage());
        }
    }
    painter.drawImage(QRect((widthMap*caseDimension+100)/2 - caseDimension*widthMap/2 + game.getCursor()->getPosX()*caseDimension, (heightMap*caseDimension +30)/2 - caseDimension*heightMap/2 + game.getCursor()->getPosY()*caseDimension, caseDimension, caseDimension), game.getCursor()->getImage());


/*
    painter.drawRect(50,100,20,40);
    QImage(":/Img/Images/Cursor.PNG");
    painter.drawImage(QRect(50, 100, 40, 40), img2); */
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    qDebug() << event->x() << "," << event->y();
    qDebug() << event->pos();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch(event->key()){
    case Qt::Key_Up :
        game.getCursor()->move(0, -1);
        this->update();
        break;
    case Qt::Key_Down :
        game.getCursor()->move(0, 1);
        this->update();
        break;
    case Qt::Key_Right :
        game.getCursor()->move(1, 0);
        this->update();
        break;
    case Qt::Key_Left :
        game.getCursor()->move(-1, 0);
        this->update();
        break;
    }
    /*if (event->key() == Qt::Key_Up){
        qDebug() << event->key();
    }
    elsif (event)*/
}
