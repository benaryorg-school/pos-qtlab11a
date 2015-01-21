#include <window.h>

Window::Window(QWidget *parent):QWidget(parent)
{
	this->setWindowTitle(tr("Numbers"));

	this->layout=new QHBoxLayout(this);
	this->setLayout(this->layout);

	this->llist=new QListWidget(this);
	this->rlist=new QListWidget(this);
	this->llist->setDragDropMode(QAbstractItemView::DragDrop);
	this->rlist->setDragDropMode(QAbstractItemView::DragDrop);
	this->llist->setSelectionMode(QAbstractItemView::ExtendedSelection);
	this->rlist->setSelectionMode(QAbstractItemView::ExtendedSelection);
	this->llist->setDefaultDropAction(Qt::MoveAction);
	this->rlist->setDefaultDropAction(Qt::MoveAction);
	this->layout->addWidget(this->llist);
	this->layout->addWidget(this->rlist);

	for(int i=0;i<100;i++)
	{
		QListWidgetItem *it=new QListWidgetItem(QString::number(i+1));
		it->setTextAlignment(Qt::AlignRight);
		this->llist->addItem(it);
	}
}

Window::~Window(void)
{
}

