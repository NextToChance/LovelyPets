#include "PicViewController.h"

void PicViewController::viewDidLoad()
{
	CALabel* label = CALabel::createWithFrame(CADipRectMake(0, 0, 200, 100));
	label->setColor(ccc4(0, 0, 0, 255));
	label->setText("pic view controller...");
	this->getView()->addSubview(label);
}

bool PicViewController::init()
{
	return true;
}
