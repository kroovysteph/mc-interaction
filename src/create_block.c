#include "minecraft.h"

void create_block(char * cmd)
{
	//Führt den fertig erzeugten String auf der Konsole auf dem Server aus
	
	int status;
	
    //syntax:                                      /fill <x1> <y1> <z1> <x2> <y2> <z2> <dirt>
	//char cmd[] = "tmux send-keys -t mc-console \"/fill                                     \n\"";
	
	status = system(cmd);
	
}