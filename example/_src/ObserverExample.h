#ifndef _MF_OBSERVER_EXAMPLE_H
#define _MF_OBSERVER_EXAMPLE_H

#include "mufise/mfUtils/IO/InputObserver.h"

class Calculator : public mufise::InputObserver
{
public:
	Calculator();
	~Calculator();

	void OnKeyPressed(const mufise::InputKey& input);
};

MAKE_SHARED(Calculator);

#endif // !_MF_OBSERVER_EXAMPLE_H