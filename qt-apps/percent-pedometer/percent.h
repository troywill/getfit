#ifndef PERCENT_H
#define PERCENT_H
#include <QLCDNumber>
class Percent : public QLCDNumber
{
  Q_OBJECT

    public:
  Percent(QWidget *parent = 0);

  private slots:
  void update();
};
#endif
