#include "MainViewController.h"
#include "PicViewController.h"
#include "FindViewController.h"
#include "MineViewController.h"

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
	std::vector<CAViewController*> vec;

	PicViewController* picView = new PicViewController;
	picView->init();
	picView->autorelease();
	CANavigationController* navi1 = new CANavigationController();
	navi1->initWithRootViewController(picView);
	navi1->autorelease();

	FindViewController* findView = new FindViewController;
	findView->init();
	findView->autorelease();
	CANavigationController* navi2 = new CANavigationController();
	navi2->initWithRootViewController(findView);
	navi2->autorelease();

	MineViewController* mineView = new MineViewController;
	mineView->init();
	mineView->autorelease();
	CANavigationController* navi3 = new CANavigationController();
	navi3->initWithRootViewController(mineView);
	navi3->autorelease();

	vec.push_back(navi1);
	vec.push_back(navi2);
	vec.push_back(navi3);

	CATabBarController::initWithViewControllers(vec);

	return true;
}
