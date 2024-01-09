#ifndef DRAGWIDGET_H
#define DRAGWIDGET_H

#include <QWidget>
#include <QPoint>
#include <QMouseEvent>

class DragWidget : public QWidget
{
    Q_OBJECT

public:
    DragWidget(QWidget *parent = nullptr);
    ~DragWidget();

public Q_SLOTS:
    void toggleVisibility();
    void blurBackground(bool blurEnabled);
    void setLocked(bool mode);
    bool isLocked();

protected:
    void mouseMoveEvent(QMouseEvent * e) override;
    void mousePressEvent(QMouseEvent * e) override;
    void mouseReleaseEvent(QMouseEvent * e) override;
    void paintEvent(QPaintEvent *e) override;

    QPoint dragPoint;
    QPoint gpress;

    bool dragged;
    bool moved;
    bool locked;

Q_SIGNALS:
    void widgetShown();
};


#endif // DRAGWIDGET_H
