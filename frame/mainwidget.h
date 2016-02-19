#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QFrame>
#include "toptoolbar.h"
#include "bottomtoolbar.h"

class MainWidget : public QFrame
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = 0);
    ~MainWidget();

protected:
    void resizeEvent(QResizeEvent *);

private:
    void initCenterContent();
    void initTopToolbar();
    void initBottomToolbar();
    void initStyleSheet();

    void updateTopToolbarPosition();
    void updateBottomToolbarPosition();

private:
    QWidget *m_centerContent;
    TopToolbar *m_TopToolbar;
    BottomToolbar *m_BottomToolbar;
};

#endif // MAINWIDGET_H
