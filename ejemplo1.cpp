#include "ejemplo1.h"


ejemplo1::ejemplo1(): Ui_Counter()
{	
	int n=0;
	setupUi(this);
	show();
	
	
	connect(button, SIGNAL(clicked()), this, SLOT(doButton()) );
	connect(horizontalSlider,SIGNAL(valueChanged(int)),this,SLOT(slide(int)));
	connect(&Temporizador,SIGNAL(timeout()),this,SLOT(LCD_temporizador()));
	Temporizador.start(1000);;
	
	
}

ejemplo1::~ejemplo1()
{}

void ejemplo1::LCD_temporizador()
{
	int n=lcdNumber->intValue();
	qDebug() << "Senal de Temporizador" << n+1;
	n = n+1;
	lcdNumber->display(n);
}

void ejemplo1::doButton()
{
	//Temporizador.stop();
	qDebug() << "Senal de Stop";
}

void ejemplo1::slide(int valor)
{
	Temporizador.start((valor + 1) * 1000);
	qDebug() << "Valor del slide:"<< valor;
}




