#include "window.h"
#include <QVBoxLayout>

Window::Window() : QWidget()
{
   button = new QPushButton("Click me");
   edit = new QLineEdit;
   edit->setPlaceholderText("Enter Text");
   label = new QLabel("Start Text");

   QVBoxLayout *layout = new QVBoxLayout;
   layout->addWidget(label);
   layout->addWidget(edit);
   layout->addWidget(button);
   this->setLayout(layout);

   connect(button, SIGNAL(clicked(bool)),
           this, SLOT(setLabelText()));
}

void Window::setLabelText()
{
    label->setText(edit->text());
}
