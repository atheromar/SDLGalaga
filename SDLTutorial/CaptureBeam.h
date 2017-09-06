#ifndef _CAPTUREBEAM_H
#define _CAPTUREBEAM_H
#include "AnimatedTexture.h"

using namespace QuickSDL;

class CaptureBeam : public AnimatedTexture {

private:

	float mTotalCaptureTime;
	float mCaptureTimer;

private:

	void RunAnimation();

public:

	CaptureBeam();
	~CaptureBeam();

	void ResetAnimation();

	virtual void Render();
};

#endif
