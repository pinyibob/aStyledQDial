#pragma once
#include <qdial.h>
#include <qcommonstyle.h>

class StyledDial : public QDial
{
    Q_OBJECT
public:
    StyledDial(QWidget* parent = nullptr);

protected:
    void paintEvent(QPaintEvent* e) override;
};

class DialStyle : public QCommonStyle
{
    Q_OBJECT
public:
    void drawComplexControl(ComplexControl cc, const QStyleOptionComplex* opt, QPainter* p,
        const QWidget* w = Q_NULLPTR) const override;
};
