#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

class Window : public QWidget
{
    Q_OBJECT
    QPushButton* button;
    QLabel* label;
    QLineEdit* edit;

public:
    Window();
public slots:
     void setLabelText();
};

#endif // WINDOW_H
