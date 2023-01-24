#include <bullet/btBulletDynamicsCommon.h>

btDiscreteDynamicsWorld* dynamicsWorld;

void initPhysics() {
    // Create the collision configuration
    btDefaultCollisionConfiguration* collisionConfiguration = new btDefaultCollisionConfiguration();
    // Create the dispatcher
    btCollisionDispatcher* dispatcher = new btCollisionDispatcher(collisionConfiguration);
    // Create the overlapping pair cache
    btDbvtBroadphase* overlappingPairCache = new btDbvtBroadphase();
    // Create the constraint solver
    btSequentialImpulseConstraintSolver* solver = new btSequentialImpulseConstraintSolver();
    // Create the dynamics world
    dynamicsWorld = new btDiscreteDynamicsWorld(dispatcher, overlappingPairCache, solver, collisionConfiguration);
    dynamicsWorld->setGravity(btVector3(0, -9.8, 0));
    // Add objects to the world
