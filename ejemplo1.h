#ifndef ejemplo1_H
#define ejemplo1_H

#include <QtGui>
#include "ui_counterDlg.h"
#include "MiQtimer.h"


class ejemplo1 : public QWidget, public Ui_Counter
{
Q_OBJECT
public:
    
    ejemplo1();
    //QTimer Temporizador;
    MiQtimer Temporizador;
    //MiQtimer *miQt;
    virtual ~ejemplo1();
    
public slots:
	void doButton();
	void LCD_temporizador();
	void slide(int valor);
};

#endif // ejemplo1_H
