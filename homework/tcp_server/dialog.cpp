#include <QMessageBox>

#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog), count(0), timer(new QTimer)
{
    ui->setupUi(this);

    ui->num->setText(QString("%1").arg(count));

    server = new Server(this);

    server->listen(QHostAddress::Any, 6666);

    connect(ui->sendBtn, SIGNAL(clicked()), this, SLOT(sendMsg()));
    connect(ui->clearBtn, SIGNAL(clicked()), this, SLOT(clearMsg()));
    connect(timer, SIGNAL(timeout()), this, SLOT(sendLoopMessage()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::showConnection()
{
    count++;

    ui->objectBox->addItem(QString("%1").arg(server->socketList.last()));

    ui->num->setText(QString("%1").arg(count));
}

void Dialog::showDisconnection(int socketDescriptor)
{
    count--;

    server->socketList.removeAll(socketDescriptor);

    ui->objectBox->clear();

    for (int i = 0; i < server->socketList.size(); i++) {
         ui->objectBox->addItem(QString("%1").arg(server->socketList.at(i)));
    }

    ui->num->setText(QString("%1").arg(count));
}


void Dialog::sendMsg()
{
    if (ui->sendMsg->text() == "") {
        QMessageBox::information(NULL,
                        tr("Notice"),
                        tr("send items can't be NULL!"),
                        QMessageBox::Yes);

        return ;
    }

    emit sendData(ui->sendMsg->text().toLocal8Bit(), ui->objectBox->currentText().toInt());

    ui->sendMsg->setText("");
}

void stringToHtmlFilter(QString &str)
{
   str.replace("&","&amp;");
   str.replace(">","&gt;");
   str.replace("<","&lt;");
   str.replace("\"","&quot;");
   str.replace("\'","&#39;");
   str.replace(" ","&nbsp;");
   str.replace("\n","<br>");
   str.replace("\r","<br>");
}

void stringToHtml(QString &str, QColor color)
{
    QByteArray data;

    if (str.isEmpty()) {
        return;
    }

    data.append(color.red());
    data.append(color.green());
    data.append(color.blue());
    QString strColor(data.toHex());

    str = QString("<span style=\" color:#%1;\">%2</span>").arg(strColor).arg(str);
}


void Dialog::revData(QString peerAddr, QByteArray data)
{
    QString msg;



    msg = QString::fromLocal8Bit(data);


    peerAddr.insert(peerAddr.size(), ": ");
    stringToHtmlFilter(peerAddr);
    stringToHtml(peerAddr, QColor(255, 0, 0));

    msg.prepend(peerAddr);
    ui->msg->append(msg);
}

void Dialog::clearMsg()
{
    ui->msg->clear();
}


