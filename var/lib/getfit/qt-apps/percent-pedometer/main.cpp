#include <QObject>
#include <iostream>
#include <QTimer>
#include <QtGui>
#include "pacer.h"
#include "arrowlcd.h"
#include "percent.h"

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  QWidget window; window.show();
  window.setGeometry(0,0,1020,600);
  window.setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0); color: rgb(102,0,153)"));

  ArrowLcd *pedometer = new ArrowLcd(&window);
  pedometer->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0); color: rgb(253,233,93)"));
  pedometer->setGeometry(0,300,512,300);
  pedometer->show();
  pedometer->setFocus();

  Pacer *pacer = new Pacer(&window);
  pacer->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0); color: rgb(253,233,93)"));
  pacer->setGeometry(0,0,512,300);
  pacer->show();




  Percent *percent = new Percent(&window);
  percent->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0); color: rgb(253,233,93)"));
  percent->setGeometry(512,0,512,300);
  percent->show();

  

  QObject::connect(pacer,SIGNAL(pacerChanged(int)),percent,SLOT(setPacerValue(int)));
  QObject::connect(pedometer,SIGNAL(pedometerChanged(int)),percent,SLOT(setPedometerValue(int)));



  return app.exec();
}
// See http://simple.wikipedia.org/wiki/Purple
// Generic Purple (RGB: 102, 0, 153)
// GOLDEN (web color GOLD) (Hex: #FFD700) (RGB: 255, 215, 0)
