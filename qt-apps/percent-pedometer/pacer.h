#ifndef PACER_H
#define PACER_H
#include <QLCDNumber>
class Pacer : public QLCDNumber
{
  Q_OBJECT

    public:
  Pacer(QWidget *parent = 0);

  private slots:
  void showTime();
};
#endif
