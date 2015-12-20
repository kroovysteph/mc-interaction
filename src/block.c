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
	char * cmd = malloc(sizeof(char) * 100);
	
	for (int i = 0; cmd[i] != '\0'; i++)
	{
		cmd[i] = ' ';
	}
	
	cmd = "tmux send-keys -t mc console \"/fill ";
	
	//Koordinaten mit Offset
	x1 = (-91 - x1);
	y1 = (100 + y1);
	z1 = (-50 - z1);
	x2 = (-91 - x2);
	y2 = (100 + y2);
	z2 = (-50 - z2);
	
	//Buffer Strings
	char s_x1[] = "";
	char s_y1[] = "";
	char s_z1[] = "";
	char s_x2[] = "";
	char s_y2[] = "";
	char s_z2[] = "";
	
	//Koordinaten in Buffer Speichern
	sprintf(s_x1, "%d", x1);
	sprintf(s_y1, "%d", y1);
	sprintf(s_z1, "%d", z1);
	sprintf(s_x2, "%d", x2);
	sprintf(s_y2, "%d", y2);
	sprintf(s_z2, "%d", z2);
	
	//CMD Befehl zusammensetzen
	strcat(cmd, s_x1); strcat(cmd, " ");
	strcat(cmd, s_y1); strcat(cmd, " ");
	strcat(cmd, s_z1); strcat(cmd, " ");
	strcat(cmd, s_x2); strcat(cmd, " ");
	strcat(cmd, s_y2); strcat(cmd, " ");
	strcat(cmd, s_z2); strcat(cmd, " ");
	strcat(cmd, block);
	strcat(cmd, "\n\"");
	
	
	return cmd;
}