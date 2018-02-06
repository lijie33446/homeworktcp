#include "serverthread.h"

serverThread::serverThread(int socketDescriptor, QObject *parent) :
    QThread(parent), socketDescriptor(socketDescriptor)
{

}

serverThread::~serverThread()
{
    socket->close();
}

void serverThread::run()
{
    socket = new MySocket(socketDescriptor, 0);

    if (!socket->setSocketDescriptor(socketDescriptor))
        return ;

    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnectToHost()));
    connect(socket, SIGNAL(revData(QString, QByteArray, int)), this, SLOT(recvData(QString, QByteArray, int)));
    connect(this, SIGNAL(sendDat(QByteArray, int)), socket, SLOT(sendMsg(QByteArray, int)));

    exec();
}

void serverThread::sendData(QByteArray data, int id)
{
    if (data == "")
        return ;

    emit sendDat(data, id);
}

void serverThread::recvData(QString peerAddr, QByteArray data, int id)
{
    emit revData(peerAddr, data, id);
}

void serverThread::disconnectToHost()
{
    emit disconnectTCP(socketDescriptor);
    socket->disconnectFromHost();
}
