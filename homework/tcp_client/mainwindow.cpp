#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    socket = new QTcpSocket();

    QObject::connect(socket, SIGNAL(readyRead()), this, SLOT(socket_Read_Data()));
    QObject::connect(socket, SIGNAL(disconnected()), this, SLOT(socket_Disconnected()));

    QRegExp rx("^((2[0-4]\\d|25[0-5]|[01]?\\d\\d?)\\.){3}(2[0-4]\\d|25[0-5]|[01]?\\d\\d?)$");

    ui->lineEdit_Ip->setValidator(new QRegExpValidator(rx, this));

    ui->pushButton_Send->setEnabled(false);
    ui->lineEdit_Ip->setText("127.0.0.1");
    ui->lineEdit_Port->setText("6666");

}

MainWindow::~MainWindow()
{
    delete ui;
    delete this->socket;
}

void MainWindow::on_pushButton_Connect_clicked()
{
    if(ui->pushButton_Connect->text() == tr("connect"))
    {
       QString IP;
       int port;

       IP = ui->lineEdit_Ip->text();
       port = ui->lineEdit_Port->text().toInt();

       socket->abort();
       socket->connectToHost(IP, port);

       if(!socket->waitForConnected(30000))
       {
          qDebug() << "Connection failed!";
          return;
       }
        qDebug() << "Connect successfully!";

       ui->pushButton_Send->setEnabled(true);

       ui->pushButton_Connect->setText("disconnect");
    }
    else
    {
        socket->disconnectFromHost();
        ui->pushButton_Connect->setText("connect");
        ui->pushButton_Send->setEnabled(false);
    }

}

void MainWindow::on_pushButton_Send_clicked()
{
     qDebug() << "Send: " << ui->textEdit_Send->toPlainText();
     socket->write(ui->textEdit_Send->toPlainText().toLatin1());
     socket->flush();
}

void MainWindow::socket_Read_Data()
{
     QByteArray buffer;
     buffer = socket->readAll();
     if(!buffer.isEmpty())
     {
       QString str = ui->textEdit_Recv->toPlainText();
       str+=tr(buffer);

       ui->textEdit_Recv->setText(str);
     }
}

void MainWindow::socket_Disconnected()
{

   ui->pushButton_Send->setEnabled(false);
   ui->pushButton_Connect->setText("connect");
   qDebug() << "Disconnected!";
}

