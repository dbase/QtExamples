#include <QApplication>

#include <iostream>

#include "form.h"
#include "thread.h"

int main(int argc, char*argv[])
{
  QApplication app(argc, argv);

  Form form;
  form.show();

  return app.exec();
}