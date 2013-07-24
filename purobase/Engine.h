/*
 * Engine.h
 *
 *  Created on: Jul 15, 2013
 *      Author: oek
 */

#ifndef ENGINE_H_
#define ENGINE_H_

#include "Puro.h"

struct DropBundle {
	Drop* drop;
	uint32_t index; // index is stored outside of drop
};

class Engine {
	MainFrame* instance_;
	std::list<struct DropBundle> drops_in_use_;
public:
	Engine(MainFrame* instance_);
	~Engine();
	void AddDrop(Drop* drop);
	void GetAudioOutput(uint32_t n, float* buffer);
};

#endif /* ENGINE_H_ */