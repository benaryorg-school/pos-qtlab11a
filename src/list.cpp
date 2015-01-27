#include <list.h>

List::List(QWidget *parent):QListWidget(parent)
{
	this->setDragDropMode(QAbstractItemView::DragDrop);
	this->setSelectionMode(QAbstractItemView::ExtendedSelection);
	this->setDefaultDropAction(Qt::MoveAction);
}

List::~List(void)
{
}

void List::dragMoveEvent(QDragMoveEvent *e)
{
	if(e->dropAction()==Qt::MoveAction)
	{
		e->accept();
	}
	else
	{
		e->ignore();
	}
}
