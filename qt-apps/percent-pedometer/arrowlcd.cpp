#include <QIODevice>
#include <QFile>
#include <QDataStream>
#include <QtGui>
#include "arrowlcd.h"

ArrowLcd::ArrowLcd(QWidget *parent) : QLCDNumber(parent)
{

  /////////////////////////////////////////////////////////////
  // Open for reading
  //  int  steps = 0;
  QFile file("/var/lib/pedometer/step_count.dat");
  file.open(QIODevice::ReadOnly);
  QDataStream in(&file);
  in.setVersion(QDataStream::Qt_4_6);
  in >> steps;
  /////////////////////////////////////////////////////////////

  
  setSegmentStyle(Filled);
  setNumDigits(8);
  arrowDisplay(steps);

  setWindowTitle(tr("January 1"));
  resize(700, 120);
}

void ArrowLcd::saveSteps(int steps)
{
  QFile file("/var/lib/pedometer/step_count.dat");
  file.open(QIODevice::WriteOnly);
  QDataStream out(&file);
  out.setVersion(QDataStream::Qt_4_6);
  out << steps;
  file.close();
}

void ArrowLcd::arrowDisplay(int steps)
{
  display(steps);
}

void ArrowLcd::countUp()
{
  steps = steps + 100;
  saveSteps(steps);
  setPedometer(steps);
}

void ArrowLcd::countDown()
{
  //  int bar = 3;
  steps-= 100;
  if ( steps < 0 ) {
    steps = 0;
  }
  saveSteps(steps);
  setPedometer(steps);
}

void ArrowLcd::keyPressEvent(QKeyEvent *event)
{
  switch (event->key()) {
  case Qt::Key_Up:
    countUp();
    break;
  case Qt::Key_Down:
    countDown();
    break;
  // default:
  //   QWidget::keyPressEvent(event);
  }
}

void ArrowLcd::setPedometer(int newSteps)
{
  if ( newSteps != oldSteps) {
    oldSteps = newSteps;
    display(newSteps);
    emit pedometerChanged(newSteps);
  }
}
