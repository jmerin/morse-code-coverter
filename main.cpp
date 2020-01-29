#include "morseconverter.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MorseConverter w;
    w.show();
    return a.exec();
}
