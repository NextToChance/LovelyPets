#ifndef _MAIN_VIEW_CONTROLLER_H__
#define _MAIN_VIEW_CONTROLLER_H__

#include "CrossApp.h"

class MainViewController : public CATabBarController
{
public:
	virtual void viewDidLoad();

	virtual bool init();
};


#endif /// end of _MAIN_VIEW_CONTROLLER_H__
