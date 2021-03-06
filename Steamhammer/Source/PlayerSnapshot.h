#pragma once

#include "Common.h"

namespace UAlbertaBot
{

class PlayerSnapshot
{
	bool excludeType(BWAPI::UnitType type);

public:
	int numBases;
	std::map<BWAPI::UnitType, int> unitCounts;

	PlayerSnapshot();
	PlayerSnapshot(BWAPI::Player);

	void takeSelf();
	void takeEnemy();

	std::string debugString() const;
};

}