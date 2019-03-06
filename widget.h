#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QBoxLayout>
#include <QLabel>
#include "float_value_slider.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void updateLabelValue(float value);

private:
    Ui::Widget *ui;
    float_value_slider *slider;
    QLabel *label;
};

#endif // WIDGET_H
