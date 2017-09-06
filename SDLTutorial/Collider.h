#ifndef _COLLIDER_H
#define _COLLIDER_H
#include "Texture.h"

using namespace QuickSDL;

class Collider : public GameEntity {

public:

	enum class ColliderType {

		Box,
		Circle
	};

protected:

	ColliderType mType;

	static const bool DEBUG_COLLIDERS = true;
	Texture* mDebugTexture;

public:

	Collider(ColliderType type);
	virtual ~Collider();

	virtual Vector2 GetFurthestPoint() = 0;

	ColliderType GetType();

	virtual void Render();

protected:

	void SetDebugTexture(Texture* texture);
};

#endif // _COLLIDER_H
