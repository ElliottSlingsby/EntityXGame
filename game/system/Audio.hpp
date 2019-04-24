#pragma once

#include <entityx\System.h>

#include "system\PhysicsEvents.hpp"

class Audio : public entityx::System<Audio>, public entityx::Receiver<Audio> {

public:
	Audio();
	~Audio();

	void configure(entityx::EventManager &events) final;
	void update(entityx::EntityManager &entities, entityx::EventManager &events, double dt) final;

	void receive(const CollidingEvent& collidingEvent);
	void receive(const ContactEvent& contactEvent);
};