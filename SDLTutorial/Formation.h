#ifndef _FORMATION_H
#define _FORMATION_H
#include "GameEntity.h"
#include "Timer.h"

using namespace QuickSDL;

class Formation : public GameEntity {

private:

	Timer* mTimer;

	float mOffsetAmount;
	float mOffsetTimer;
	float mOffsetDelay;
	int mOffsetCounter;
	int mOffsetDirection;

	float mSpreadTimer;
	float mSpreadDelay;
	int mSpreadCounter;
	int mSpreadDirection;

	Vector2 mGridSize;

	bool mLocked;

public:

	Formation();
	~Formation();

	Vector2 GridSize();

	int GetTick();

	void Lock();

	bool Locked();

	void Update();
};

#endif
