#include <QTextStream>
#include <qcustomplot.h>

int main()
{
    QTextStream(stdout) << "Hello, world!" << endl;

    QVector<double> x(101), y(101);

    return 0;
}