#ifndef _CLASSIFY_VIEW_CONTROLLER_H__
#define _CLASSIFY_VIEW_CONTROLLER_H__

#include "CrossApp.h"

class ClassifyViewController : public CAViewController
{
public:
	virtual void viewDidLoad();

	virtual void viewDidUnload();

	virtual bool init();

private:
};

#endif /// end of _CLASSIFY_VIEW_CONTROLLER_H__
