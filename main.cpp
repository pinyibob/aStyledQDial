#include <qapplication.h>
#include <StyledDial.h>
int main(int argc,char** argv)
{
    QApplication a(argc,argv);
    StyledDial dial;
    dial.show();

    return a.exec();
}