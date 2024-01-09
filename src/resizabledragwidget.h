#ifndef RESIZABLEDRAGWIDGET_H
#define RESIZABLEDRAGWIDGET_H

#include "dragwidget.h"

class ResizableDragWidget : public DragWidget
{
    Q_OBJECT

public:
    explicit ResizableDragWidget(QWidget *parent = nullptr);
    ~ResizableDragWidget();

protected:
    void mouseMoveEvent(QMouseEvent * e) override;
    void mousePressEvent(QMouseEvent * e) override;
    void mouseReleaseEvent(QMouseEvent * e) override;
    void paintEvent(QPaintEvent *e) override;

    bool doResize;
};



#endif // RESIZABLEDRAGWIDGET_H
