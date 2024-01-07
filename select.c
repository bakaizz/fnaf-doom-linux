#include <stdio.h>
#include <stdlib.h>

// There are commands to select the options
// You can recreate a new script to use selections like this
// Thank you for check it!
// I'm not a programmer :D

 int main() {


  int select;

	printf("Select game mode: \n");
	printf("1. Single Player\n");
	printf("2. Create a room for 2 Players\n");
	printf("3. Create a room for 3 PLayers\n");
	printf("4. Create a room for 4 Players\n");
	scanf("%d", &select);

  switch (select) {

	case 1:
	printf("Single Player Selected \n");
	system("gzdoom +map e1m2 -file FiveNightsAtFreddys1 -file  FNAF.pk3 -file brightmaps.pk3  -file FiveNightsAtFreddys1_3.wad");
	break;

	case 2:
	printf("Multiplayer Selected\n");
	system("gzdoom +map e1m2 -host 2 -file FiveNightsAtFreddys1 -file  FNAF.pk3 -file brightmaps.pk3  -file FiveNightsAtFreddys1_3.wad");

	break;

	case 3:
        printf("Multiplayer Selected\n");
	system("gzdoom +map e1m2 -host 3 -file FiveNightsAtFreddys1 -file  FNAF.pk3 -file brightmaps.pk3  -file FiveNightsAtFreddys1_3.wad");
	break;

	case 4:
	printf("Multiplayer selected\n");
        system("gzdoom +map e1m2 -host 3 -file FiveNightsAtFreddys1 -file  FNAF.pk3 -file brightmaps.pk3  -file FiveNightsAtFreddys1_3.wad");
	break;

	 }
}

