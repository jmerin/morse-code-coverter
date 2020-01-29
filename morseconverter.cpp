#include "morseconverter.h"
#include "ui_morseconverter.h"
#include <QChar>
#include <QMessageBox>
#include <QMap>


MorseConverter::MorseConverter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MorseConverter)
{
    ui->setupUi(this);
}

MorseConverter::~MorseConverter()
{
    delete ui;
}


void MorseConverter::on_pushButton_convert_clicked()
{
    QString t = ui->lineEdit_text->text();
    QString m = converter(t);
    ui->textEdit_text->setText(m);


}

QString MorseConverter::converter(QString str)
{
    QMap<QChar,QString> mymap;
    mymap['a']=mymap['A']=".- ";
    mymap['b']=mymap['B']="-... ";
    mymap['c']=mymap['C']="-.-. ";
    mymap['d']=mymap['D']="-.. ";
    mymap['e']=mymap['E']=". ";
    mymap['f']=mymap['F']="..-. ";
    mymap['g']=mymap['G']="--. ";
    mymap['h']=mymap['H']=".... ";
    mymap['i']=mymap['I']=".. ";
    mymap['j']=mymap['J']=".--- ";
    mymap['k']=mymap['K']="-.- ";
    mymap['l']=mymap['L']=".-.. ";
    mymap['m']=mymap['M']="-- ";
    mymap['n']=mymap['N']="-. ";
    mymap['o']=mymap['O']="--- ";
    mymap['p']=mymap['P']=".--. ";
    mymap['q']=mymap['Q']="--.- ";
    mymap['r']=mymap['R']=".-. ";
    mymap['s']=mymap['S']="... ";
    mymap['t']=mymap['T']="- ";
    mymap['u']=mymap['U']="..- ";
    mymap['v']=mymap['V']="...- ";
    mymap['w']=mymap['W']=".-- ";
    mymap['x']=mymap['X']="-..- ";
    mymap['y']=mymap['Y']="-.-- ";
    mymap['z']=mymap['Z']="--.. ";
    mymap[' ']="   ";


    QString MorseCode="";
    int n =str.size();
    for(int i=0;i<n;i++)
    {
        QChar s=str.at(i);
        if(s.isLetter()||s==' ')
        {
        MorseCode.append(mymap[s]);
        }
        else
        {
         QMessageBox::warning(this,"Message","Invalid input");
         MorseCode ="";
         break;
        }
    }


    return MorseCode;

}
