#include "FindViewController.h"


void FindViewController::viewDidLoad()
{
	CALabel* label = CALabel::createWithFrame(CADipRectMake(0, 0, 200, 100));
	label->setColor(ccc4(0, 0, 0, 255));
	label->setText("Find view controller...");
	label->setTextAlignment(CATextAlignmentLeft);
	this->getView()->addSubview(label);
}

bool FindViewController::init()
{
	return true;
}
