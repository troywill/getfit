#ifndef ARROWLCD_H
#define ARROWLCD_H
#include <QLCDNumber>
#include <Qt>

class ArrowLcd : public QLCDNumber
{
  Q_OBJECT

    public:
  ArrowLcd(QWidget *parent = 0);
  int steps;

  private slots:
  void arrowDisplay(int);
  void keyPressEvent(QKeyEvent *event);
  void countUp();
  void countDown();
  void saveSteps(int);
};
#endif
