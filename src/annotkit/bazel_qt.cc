#include <QtWidgets/QApplication>
#include <QtGui/QtGui>
#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtCore/Qt>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow* window = new QMainWindow();
    QHBoxLayout* hbox = new QHBoxLayout();
    QVBoxLayout* vbox = new QVBoxLayout();
    QLineEdit* edit = new QLineEdit();
    QPushButton* btn = new QPushButton("決定");
    QWidget* widget = new QWidget();
    QLabel* label = new QLabel();

    hbox->addWidget(new QLabel("名前"), 0);
    hbox->addWidget(edit, 1);
    hbox->addWidget(btn, 0);
    vbox->addLayout(hbox, 0);
    vbox->addWidget(label, 1);
    widget->setLayout(vbox);
    window->setCentralWidget(widget);
    window->setGeometry(500, 500, 500, 200);

    QObject::connect(btn, &QPushButton::clicked, [label, edit]() {
        label->setText("Hello " + edit->text() + "!!");
    });
    QObject::connect(edit, &QLineEdit::returnPressed, [&]() {
        label->setText("Hello " + edit->text() + "!!");
    });

    window->show();

    return a.exec();
}
