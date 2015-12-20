#include "minecraft.h"

void print_to_mc(void)
{
	//Gibt Strings über den Server in Minecraft aus
	int status = 0;
	char cmd[] = "tmux send-keys -t mc-console \"/say Hello World!\n\"";
	
	status = system(cmd);
}