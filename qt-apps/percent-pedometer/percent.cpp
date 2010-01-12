#include <QtGui>
#include "percent.h"

Percent::Percent(QWidget *parent) : QLCDNumber(parent)
{
  setSegmentStyle(Filled);
  setNumDigits(4);
  setFrameShape(QFrame::NoFrame);
  update();
  resize(512, 150);
  int pacer_value = 0;
}

void Percent::update()
{
  display(50);
}
