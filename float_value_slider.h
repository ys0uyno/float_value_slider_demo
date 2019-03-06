#ifndef FLOAT_VALUE_SLIDER_H
#define FLOAT_VALUE_SLIDER_H

#include <QSlider>

class float_value_slider : public QSlider
{
    Q_OBJECT

public:
    float_value_slider(QWidget *parent = nullptr);

signals:
    void floatValueChanged(float value);

public slots:
    void applyValueChanged(int value);
};

#endif // FLOAT_VALUE_SLIDER_H
