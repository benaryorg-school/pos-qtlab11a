#ifndef LIST_H
#define LIST_H

#include <QtCore>
#if QTCORE_VERSION>=0x050000
#include <QtWidgets>
#endif
#include <QtGui>

class List:public QListWidget
{
	Q_OBJECT

public:
	List(QWidget *parent=0);
	~List(void);

protected:
	void dragMoveEvent(QDragMoveEvent *e);
};

#endif /** LIST_H **/
