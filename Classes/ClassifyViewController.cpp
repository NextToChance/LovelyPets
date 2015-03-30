#include "ClassifyViewController.h"

bool ClassifyViewController::init()
{
	return true;
}

void ClassifyViewController::viewDidLoad()
{
	/// Ìí¼Ó±êÇ©
	CALabel* label = CALabel::createWithFrame(CADipRectMake(0, 0, 300, 80));
	label->setColor(ccc4(0, 0, 0, 255));
	label->setText("classify view controller...");
	label->setTextAlignment(CATextAlignmentLeft);
	this->getView()->addSubview(label);
}

void ClassifyViewController::viewDidUnload()
{

}
