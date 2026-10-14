// Types.h -Temporaty shared type which will be replaced with group version.
/*CSCE 306: OO Software Development
*  Group 4
*  Contributors: Ryoto Murachi
*  Start Date: 10/13/2026
*  CurDate: 10/13/2026
*/
#pragma once
#include <vector>

enum class Suit { Spades, Diamonds, Clubs, Hearts };
enum class CardRank { Two = 2, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace };
struct Card{
    Suit suit;
    CardRank rank;
};
enum class Action { Fold, Call, Raise };
struct StateGame{
    // pot, current bet, cards,...
};