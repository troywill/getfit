#include <QtGui>
#include "pacer.h"
Pacer::Pacer(QWidget *parent) : QLCDNumber(parent)
{
  setSegmentStyle(Filled);
  setNumDigits(7);
  setFrameShape(QFrame::NoFrame);
  
  QTimer *timer = new QTimer(this);
  connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
  timer->start(1000);

  showTime();
  setWindowTitle(tr("January 2"));
  
  resize(512, 150);
}
void Pacer::showTime()
{
  // Turn this into a pedometer
  QDateTime now = QDateTime::currentDateTime();
  uint epoch_now = now.toTime_t ();
  QDateTime start = QDateTime::fromString("21:33:00", "hh:mm:ss");
  //  QDateTime xmas(QDate( now.date().year(), now.date().month, now.date()

  QDateTime xmas(QDate(now.date().year(), now.date().month(), now.date().day() ), QTime( 5, 0 )); // start at 5 AM
  uint epoch_start = xmas.toTime_t ();
  int diff = epoch_now - epoch_start;
  float percent_done;
  int step_goal;
  int duration = 13 * 3600; // number of seconds to reach step goal
  percent_done = ( diff * 1.0 ) / duration;
  step_goal = 20000.0 * percent_done;
  
  QString text = start.toString("hh:mm:ss");
  QString foo = QString::number ( diff );
  setPacer(step_goal);
}

void Pacer::setPacer(int newSteps)
{
  if ( newSteps != oldSteps) {
    oldSteps = newSteps;
    display(newSteps);
    emit pacerChanged(newSteps);
  }
}

