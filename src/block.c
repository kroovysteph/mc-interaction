#include "minecraft.h"

char * set_block_coords(int x1, int y1, int z1, int x2, int y2, int z2, char block[])
{
    //Produziert den String der für die Konsole auf dem Server lesbar ist aus der Funktion, die das Bild einliest
    /*
    
    [ ][ ][ ][ ][ ][ ][ ][ ]
    [ ][ ][ ][ ][ ][ ][ ][ ]
    [ ][ ][ ][ ][ ][ ][ ][ ]
    [ ][ ][ ][ ][ ][ ][ ][ ]
    [ ][ ][ ][ ][ ][ ][ ][ ]
    [ ][ ][ ][ ][ ][ ][ ][ ]
    [ ][ ][ ][ ][ ][ ][ ][ ]
    [ ][ ][ ][ ][ ][ ][ ][ ]
    [ ][ ][ ][ ][ ][ ][ ][ ]
    [ ][ ][ ][ ][ ][ ][ ][ ]
    
    */
    
    //syntax:                                      /fill <x1> <y1> <z1> <x2> <y2> <z2> <dirt>
	//char cmd[] = "tmux send-keys -t mc-console \"/fill                                     \n\"";
	
	//Koordinaten mit Offset
	x1 = (-91 - x1);
	y1 = (      y1);
	z1 = (-50 - z1);
	x2 = (-91 - x2);
	y2 = (      y2);
	z2 = (-50 - z2);
	
	//Buffer Strings
	char *s_x1 = s_of_int(x1);
	char *s_y1 = s_of_int(y1);
	char *s_z1 = s_of_int(z1);
	char *s_x2 = s_of_int(x2);
	char *s_y2 = s_of_int(y2);
	char *s_z2 = s_of_int(z2);
	
	
	
	char *cmd = malloc(sizeof(char) * 36);	
	cmd = "tmux send-keys -t mc-console \"/fill ";
	
	//CMD Befehl zusammensetzen
	cmd = s_concat(cmd, s_x1);
	cmd = s_concat(cmd, " ");
	cmd = s_concat(cmd, s_y1);
	cmd = s_concat(cmd, " ");
	cmd = s_concat(cmd, s_z1); 
	cmd = s_concat(cmd, " ");
	cmd = s_concat(cmd, s_x2); 
	cmd = s_concat(cmd, " ");
	cmd = s_concat(cmd, s_y2); 
	cmd = s_concat(cmd, " ");
	cmd = s_concat(cmd, s_z2); 
	cmd = s_concat(cmd, " ");
	cmd = s_concat(cmd, block);
	cmd = s_concat(cmd, "\n\"");
	
	return cmd;
}