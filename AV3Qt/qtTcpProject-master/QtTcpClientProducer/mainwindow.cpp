#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTimer>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow){
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  connect(ui->btnConnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpConnect()));

  connect(ui->btnDisconnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpDisconnect()));

  connect(ui->btnStart,
          SIGNAL(clicked(bool)),
          this,
          SLOT(startTransmission()));

  connect(ui->btnStop,
          SIGNAL(clicked(bool)),
          this,
          SLOT(stopTransmission()));

  timer = new QTimer(this);
  connect(timer,
          SIGNAL(timeout()),
          this,
          SLOT(generateInput()));

  ui->btnConnect->setEnabled(true);
  ui->btnDisconnect->setEnabled(false);
  ui->btnStart->setEnabled(false);
  ui->btnStop->setEnabled(false);
  ui->minSlider->setEnabled(false);
  ui->maxSlider->setEnabled(false);
  ui->timingSlider->setEnabled(false);
}

void MainWindow::tcpConnect(){
  if(!(ui->edtIP->text() == "")){
      socket->connectToHost(ui->edtIP->text().trimmed(),1234);
      if(socket->waitForConnected(3000)){
        ui->btnConnect->setEnabled(false);
        ui->btnDisconnect->setEnabled(true);
        ui->btnStart->setEnabled(true);
        ui->minSlider->setEnabled(true);
        ui->maxSlider->setEnabled(true);
        ui->timingSlider->setEnabled(true);
        qDebug() << "Connected";
        str = "<font color=\"green\">Connected to "+ ui->edtIP->text().trimmed() +"</font>";
        showMessage(str);

      }
      else{
          ui->btnConnect->setEnabled(true);
          ui->btnDisconnect->setEnabled(false);
          qDebug() << "Disconnected";
          str = "<font color=\"blue\">Unable to reach host "+ ui->edtIP->text().trimmed() +"</font>";
          showMessage(str);
          QMessageBox::warning(this,tr("Error"), tr("Unable to Connect to Host"));
      }
  }else{
    QMessageBox::warning(this,tr("Error"), tr("O campo Ip nao pode ser vazio!"));
  }
}

void MainWindow::tcpDisconnect(){

    if(socket->state()== QAbstractSocket::ConnectedState){
        socket->disconnectFromHost();
        timer->stop();
        ui->btnConnect->setEnabled(true);
        ui->btnDisconnect->setEnabled(false);
        ui->btnStart->setEnabled(false);
        ui->btnStop->setEnabled(false);
        ui->minSlider->setEnabled(false);
        ui->maxSlider->setEnabled(false);
        ui->timingSlider->setEnabled(false);
        qDebug() << "Disconnected";
        str = "<font color=\"red\">Disconnected from "+ ui->edtIP->text().trimmed() +"</font>";
        showMessage(str);
    }
}

void MainWindow::showMessage(QString msg){
    ui->textBrowser->append(msg);
}

void MainWindow::startTransmission(){

    if(ui->minSlider->value() <= ui->maxSlider->value()){
        QString data = "Transmission Started";
        str = "<font color=\"black\">"+ data +"</font>";
        showMessage(str);
        ui->btnStart->setEnabled(false);
        ui->btnStop->setEnabled(true);
        ui->minSlider->setEnabled(false);
        ui->maxSlider->setEnabled(false);
        ui->timingSlider->setEnabled(false);
        int sec = ui->timingSlider->value();
        timer->start(sec*1000);

    }else{
        QMessageBox::warning(this,tr("Error"), tr("O valor Min nao pode ser maior que o Max!"));
        qDebug()<<"Min tem que ser <= Max";
        ui->btnStart->setEnabled(true);
        ui->btnStop->setEnabled(false);
        ui->minSlider->setEnabled(true);
        ui->maxSlider->setEnabled(true);
        ui->timingSlider->setEnabled(true);
    }
}

void MainWindow::generateInput(){

    if(socket->state()== QAbstractSocket::ConnectedState){
        qint64 now = QDateTime::currentMSecsSinceEpoch();
        int min = ui->minSlider->value();
        int max = ui->maxSlider->value();
        int dado = qrand() % ((max + min) - min) + min;

        QString data = "set "+QString::number(now)+" "+QString::number(dado);

        socket->write(data.toStdString().c_str());
        if(socket->waitForBytesWritten(3000)){
          qDebug()<<data;
          data = "set "+QDateTime::fromMSecsSinceEpoch(now).toString(Qt::ISODate)+" "+QString::number(dado);
          str = "<font color=\"black\">"+ data +"</font>";
          showMessage(str);
        }else{
          showMessage("Failed to send Data");
        }
    }


}

void MainWindow::stopTransmission(){

    //Stop Transmission
    timer->stop();

    QString data = "Transmission Stopped";
    str = "<font color=\"black\">"+ data +"</font>";
    showMessage(str);


    ui->btnStart->setEnabled(true);
    ui->btnStop->setEnabled(false);
    ui->minSlider->setEnabled(true);
    ui->maxSlider->setEnabled(true);
    ui->timingSlider->setEnabled(true);
}

MainWindow::~MainWindow(){
  delete socket;
  delete ui;
  delete timer;
}
