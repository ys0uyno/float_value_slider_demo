#include "float_value_slider.h"

float_value_slider::float_value_slider(QWidget *parent)
    : QSlider(parent)
{
    connect(this, SIGNAL(valueChanged(int)),
            this, SLOT(applyValueChanged(int))
            );
}

void float_value_slider::applyValueChanged(int value)
{
    float floatValue = static_cast<float>(value) / 10;
    emit floatValueChanged(floatValue);
}
