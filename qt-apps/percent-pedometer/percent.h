#ifndef PERCENT_H
#define PERCENT_H
#include <QLCDNumber>
class Percent : public QLCDNumber
{
  Q_OBJECT

    public:
  Percent(QWidget *parent = 0);
  int pacer_value;
  int pedometer_steps;
  private slots:
  void setPacerValue(int);
  void setPedometerValue(int);
};
#endif
