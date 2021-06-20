#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QStackedWidget>
#include <QEvent>
#include <QCloseEvent>

class MainWindow : public QStackedWidget {

    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        void activate();
    protected:
        void closeEvent(QCloseEvent *event);
        void changeEvent(QEvent *event);
        bool nativeEvent(const QByteArray &eventType, void *message, qintptr *result);
};

#endif