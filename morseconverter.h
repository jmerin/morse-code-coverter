#ifndef MORSECONVERTER_H
#define MORSECONVERTER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MorseConverter; }
QT_END_NAMESPACE

class MorseConverter : public QMainWindow
{
    Q_OBJECT

public:
    MorseConverter(QWidget *parent = nullptr);
    ~MorseConverter();

private slots:
    void on_pushButton_convert_clicked();
    QString converter(QString);

private:
    Ui::MorseConverter *ui;
};
#endif // MORSECONVERTER_H
