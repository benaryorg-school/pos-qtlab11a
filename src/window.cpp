#include <window.h>
#include <list.h>

Window::Window(QWidget *parent):QWidget(parent)
{
	this->setWindowTitle(tr("Numbers"));

	this->layout=new QHBoxLayout(this);
	this->setLayout(this->layout);

	this->llist=new List(this);
	this->rlist=new List(this);
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

