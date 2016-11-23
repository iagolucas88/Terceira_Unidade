#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow){
  ui->setupUi(this);

  /*connect(ui->pushButtonMorre,
          SIGNAL(clicked(bool)),
          this,
          SLOT(finaliza()));*/

  /*connect(ui->horizontalSliderVeloc,
          SIGNAL(valueChanged(int)),
          ui->widgetPlotter,
          SLOT(setVelocidade(int)));*/

  connect(ui->widgetPlotter,
          SIGNAL(posx(int)),
          //ui->DateTime_value_label,
          SLOT(display(int)));

  connect(ui->widgetPlotter,
          SIGNAL(posy(int)),
          //ui->Value_num_Label,
          SLOT(display(int)));

}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::finaliza()
{
  exit(0);
}
/*
void MainWindow::mostraLcd(int value)
{
  ui->lcdNumber->display(value);
}
*/
void MainWindow::mostraDialogo()
{
  Dialog d;
  d.exec();
}













