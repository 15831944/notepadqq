#ifndef LOCALCOMMUNICATION_H
#define LOCALCOMMUNICATION_H

#include <QString>
#include <QLocalSocket>

class LocalCommunication
{
public:
    LocalCommunication();

    static bool sendRaw(QByteArray data, QLocalSocket *socket);
    static bool send(QString message, QLocalSocket *socket);
    static QByteArray receiveRaw(QLocalSocket *socket);
    static QString receive(QLocalSocket *socket);
    static int numOfDigits(int n);
private:
    static const int MAX_PKT_SIZE = 999999;
};

#endif // LOCALCOMMUNICATION_H
