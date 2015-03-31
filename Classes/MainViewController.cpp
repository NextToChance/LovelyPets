#include "MainViewController.h"

void MainViewController::viewDidLoad()
{
	this->getView()->setColor(ccc4(200, 200, 200, 255));
	/// 添加标签
	CALabel* label = CALabel::createWithFrame(CADipRectMake(0, 0, 400, 80));
	label->setColor(ccc4(0, 0, 0, 255));
	label->setText("main view controller...");
	label->setTextAlignment(CATextAlignmentLeft);
	this->getView()->addSubview(label);
}

bool MainViewController::init()
{
	return true;
}
