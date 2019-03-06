#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    slider = new float_value_slider();
    slider->setOrientation(Qt::Horizontal);
    slider->setRange(0, 20);
    connect(slider, SIGNAL(floatValueChanged(float)),
            this, SLOT(updateLabelValue(float))
            );

    label = new QLabel();

    QVBoxLayout *vlayout = new QVBoxLayout(this);
    vlayout->addWidget(slider);
    vlayout->addWidget(label);
    updateLabelValue(slider->value());
}

Widget::~Widget()
{
    delete ui;
}

void Widget::updateLabelValue(float value)
{
    label->setText(QString::number(static_cast<double>(value), 'f', 2));
}
