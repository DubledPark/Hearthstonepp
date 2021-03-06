/*************************************************************************
> File Name: Spell.cpp
> Project Name: Hearthstone++
> Author: Chan-Ho Chris Ohk
> Purpose: Spell class inherits from Card class.
> Created Time: 2017/10/11
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <Models/Entities/Spell.h>

namespace Hearthstonepp
{
	Spell::Spell(
		std::string id, Rarity rarity, Faction faction, CardSet cardSet,
		CardClass cardClass, CardType cardType, Race race,
		std::string name, std::string text, bool collectible,
		int cost, int attack, int health, int durability,
		std::vector<GameTag> mechanics,
		std::map<PlayReq, int> playRequirements,
		std::vector<std::string> entourages) :
		Card(
			id, rarity, faction, cardSet, cardClass, cardType, race,
			name, text, collectible, cost, attack, health, durability,
			mechanics, playRequirements, entourages)
	{

	}

	void Spell::ShowInfo() const
	{

	}
}