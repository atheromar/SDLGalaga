#ifndef _PHYSENTITY_H
#define _PHYSENTITY_H

#include <vector>

#include "Collider.h"

class PhysEntity : public GameEntity {

protected:

	unsigned long mId;

	std::vector<Collider*> mColliders;

	Collider* mBroadPhaseCollider;

public:

	PhysEntity();
	virtual ~PhysEntity();

	unsigned long GetId();

	bool CheckCollision(PhysEntity* other);

	virtual void Hit(PhysEntity* other);

	virtual void Render();

protected:

	virtual bool IngnoreCollisions();

	void AddCollider(Collider* collider, Vector2 localPos = VEC2_ZERO);
};

#endif // _PHYSENTITY_H
