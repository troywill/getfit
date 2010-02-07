#ifndef PACER_H
#define PACER_H
#include <QLCDNumber>
class Pacer : public QLCDNumber
{
  Q_OBJECT

    public:
  Pacer(QWidget *parent = 0);
  int newSteps;
  int oldSteps;

  public slots:
  void setPacer(int newSteps);
  
  private slots:
  void showTime();

  signals:
  void pacerChanged(int);
};
#endif
