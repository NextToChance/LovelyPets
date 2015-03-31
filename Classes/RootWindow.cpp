#include "RootWindow.h"
#include "ClassifyViewController.h"
#include "MainViewController.h"

RootWindow* RootWindow::create()
{
    RootWindow* _window = new RootWindow();
    _window->init();
    _window->autorelease();
    return _window;
}

RootWindow::RootWindow()
{

}

RootWindow::~RootWindow()
{

}

bool RootWindow::init()
{
    if (!CAWindow::init())
    {
        return false;
    }
    this->setColor(ccc4(87, 154, 244, 255));

    MainViewController* mainView = new MainViewController;
	mainView->init();
	mainView->autorelease();

	CANavigationController* navi = new CANavigationController;
	navi->initWithRootViewController(mainView);
	navi->setNavigationBarHidden(true, false);
	navi->autorelease();

	ClassifyViewController* classify = new ClassifyViewController;
	classify->init();
	classify->autorelease();

	CADrawerController* drawer = new CADrawerController;
	drawer->initWithController(classify, navi, this->getBounds().size.width * 5 / 6.0f);
	drawer->setBackgroundView(CAView::createWithColor(CAColor_black));
	drawer->setEffect3D(true);
	drawer->autorelease();

	CCRect rect = this->getBounds();
	rect.size.height /= 2;
	rect.origin.y = rect.size.height;
	//drawer->getBackgroundView()->addSubview(CAView::createWithFrame(rect));

	this->setRootViewController(drawer);
    
    return true;
}
