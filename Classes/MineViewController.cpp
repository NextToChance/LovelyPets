#include "MineViewController.h"

void MineViewController::viewDidLoad()
{
	CALabel* label = CALabel::createWithFrame(CADipRectMake(0, 0, 200, 100));
	label->setColor(ccc4(0, 0, 0, 255));
	label->setText("mine view controller ...");
	this->getView()->addSubview(label);
}

bool MineViewController::init()
{
	return true;
}
