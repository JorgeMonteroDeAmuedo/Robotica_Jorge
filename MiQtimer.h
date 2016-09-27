#ifndef MIQTIMER_H
#define MIQTIMER_H
#include <QtGui>
#include "ui_counterDlg.h"
#include <QObject>
#include <QThread>

class MiQtimer :  public QThread
{
  Q_OBJECT
  
    public:
      MiQtimer();
      ~MiQtimer();
      virtual void run();
      virtual void start(int periodo);

    signals:
      void timeout();
      
    private:
      int periodo;
  
    
};

#endif // MIQTIMER_H
