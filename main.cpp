#include <QCoreApplication>
#include <QSerialPortInfo>

#include <iostream>

int main(int argc, char *argv[])
{
    QList<QSerialPortInfo> ports = QSerialPortInfo::availablePorts();
    for(const QSerialPortInfo & portInfo: ports) {
        std::cout << portInfo.portName().toStdString() << "[" << portInfo.description().toStdString() << "]" << std::endl;
    }
    return 0;
}
