#include <QtGui>
#include "percent.h"

Percent::Percent(QWidget *parent) : QLCDNumber(parent)
{
  pedometer_steps = 1;
  pacer_value = 1;
  setSegmentStyle(Filled);
  setNumDigits(4);
  setFrameShape(QFrame::NoFrame);
  resize(412, 150);
}

void Percent::setPacerValue(int steps)
{
  pacer_value = steps;
  float percent = ( 1.0 * pedometer_steps ) / ( 1.0 * pacer_value ) * 100.0;
  display(percent);
}

void Percent::setPedometerValue(int steps)
{
  pedometer_steps = steps;
  float percent = ( 1.0 * pedometer_steps ) / ( 1.0 * pacer_value ) * 100.0;
  display(percent);
}
