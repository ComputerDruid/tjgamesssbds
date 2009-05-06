#ifndef STAGES_H
#define STAGES_H

#include "stage.h"

extern const int FINALDESTINATION, POKEMONSTADIUM, CASTLESIEGE, CORNERIA;
// stage shortcuts just like character shortcuts

class FinalDestination: public Stage {
	public:
		FinalDestination();
		void Initialize(); // initializes all the variables for final destination
		~FinalDestination();
}; // the stage Final Destination
class PokemonStadium: public Stage { 
	public:
		PokemonStadium();
		void Initialize(); // initializes the pokemon stadium stage
		~PokemonStadium();
}; // the stage Pokemon Stadium
class CastleSiege: public Stage {
	public:
		CastleSiege();
		void Initialize(); // initializes Castle Siege
		~CastleSiege();
}; // the stage Castle Siege
class Corneria: public Stage {
	public:
		Corneria();
		void Initialize(); // initializes Corneria
		~Corneria();
}; // the stage corneria
#endif
