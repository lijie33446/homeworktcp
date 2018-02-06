#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTimer>

#include "server.h"

namespace Ui {
class Dialog;
}

class Server;

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

signals:
    void sendData(QByteArray data, int id);

public slots:
    void revData(QString peerHost, QByteArray data, int id);

private slots:
    void showConnection();
    void showDisconnection(int socketDescriptor);
    void sendMsg();
    void clearMsg();

private:
    Ui::Dialog *ui;

    int count;

    Server *server;

};

#endif // DIALOG_H
