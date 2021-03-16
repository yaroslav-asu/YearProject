#include "Game.h"
#include "GlobalVariables.h"
void setup_global_variables() {
	for (int i = 0; i < genome_lenth; i++) null_genome[i] = 25;
}
int main()
{
	setup_global_variables();

	Game game;
	game.start();
	return 0;
}