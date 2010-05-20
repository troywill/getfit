#include <QApplication>
#include "arrowlcd.h"

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  ArrowLcd pedometer;
  pedometer.show();
  return app.exec();
}
