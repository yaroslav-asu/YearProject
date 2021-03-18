#include "Game.h"
//#include "GlobalVariables.h"
#include "GlobalVariables.h"
extern int null_genome[genome_lenth];

void setup_global_variables() {
	for (int i = 0; i < genome_lenth; i++) null_genome[i] = 25;
}
int main()
{
	srand(time(NULL));
	setup_global_variables();
	Game game;
	game.generate_cells();
	game.start();
	
	return 0;
}