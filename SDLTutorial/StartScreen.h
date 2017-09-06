#ifndef _STARTSCREEN_H
#define _STARTSCREEN_H
#include "AnimatedTexture.h"
#include "InputManager.h"
#include "BackgroundStars.h"
#include "Scoreboard.h"

using namespace QuickSDL;

class StartScreen : public GameEntity {

private:

	Timer* mTimer;
	InputManager* mInput;

	//Top Bar Entities
	GameEntity* mTopBar;
	Texture* mPlayerOne;
	Texture* mHiScore;
	Texture* mPlayerTwo;
	Scoreboard* mPlayerOneScore;
	Scoreboard* mTopScore;
	Scoreboard* mPlayerTwoScore;

	//Logo Entities
	Texture* mLogo;
	AnimatedTexture* mAnimatedLogo;

	//Play Mode Entities
	GameEntity* mPlayModes;
	Texture* mOnePlayerMode;
	Texture* mTwoPlayerMode;
	Texture* mCursor;
	Vector2 mCursorStartPos;
	Vector2 mCursorOffset;
	int mSelectedMode;

	//Bottom Bar Entities
	GameEntity* mBotBar;
	Texture* mNamco;
	Texture* mDates;
	Texture* mRights;

	//Screen Animation Variables
	Vector2 mAnimationStartPos;
	Vector2 mAnimationEndPos;
	float mAnimationTotalTime;
	float mAnimationTimer;
	bool mAnimationDone;

	BackgroundStars* mStars;

public:

	StartScreen();
	~StartScreen();

	void ResetAnimation();

	int SelectedMode();

	void ChangeSelectedMode(int change);

	void Update();

	void Render();
};

#endif