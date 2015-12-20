#include <stdio.h>
#include <stdlib.h>


void print_to_mc(void);
void create_block(char *cmd);
int s_length(char s[]);
char * set_block_coords(int x1, int y1, int z1, int x2, int y2, int z2, char block[]);


void print_to_mc(void) {
	
	int status;
	char cmd[] = "tmux send-keys -t mc-console \"/say Hello World!\n\"";
	
	status = system(cmd);
}

void create_block(char *cmd) {
	
	int status;
//                                               /fill <x1> <y1> <z1> <x2> <y2> <z2> <block>
//
	//char cmd[] = "tmux send-keys -t mc-console \"/fill -91 78 -50 -91 78 -50 dirt           \n\"";
	
	status = system(cmd);
	
}

char * set_block_coords(int x1, int y1, int z1, int x2, int y2, int z2, char block[]) {
	
	char str_x1[5];
	char str_y1[5];
	char str_z1[5];
	char str_x2[5];
	char str_y2[5];
	char str_z2[5];
	sprintf(str_x1, "%d", (-91 - x1));
	sprintf(str_y1, "%d", (100 + y1));
	sprintf(str_z1, "%d", (-50 - z1));
	sprintf(str_x2, "%d", (-91 - x2));
	sprintf(str_y2, "%d", (100 + y2));
	sprintf(str_z2, "%d", (-50 - z2));
	
	printf("%s\n", str_x1);
	printf("%s\n", str_y1);
	printf("%s\n", str_z1);
	printf("%s\n", str_x2);
	printf("%s\n", str_y2);
	printf("%s\n", str_z2);
	
	char * cmd = malloc(79 * sizeof(char));
	
	cmd = "tmux send-keys -t mc-console \"/say set_block_coords()                   \n\"";
	
	for (int i = 37; i < 73; i++) {
		cmd[i] = ' ';
	}
	printf("geschafft!\n");
	
	int i = 0;
	int index = 37;
	while (str_x1[i] != '\0' && str_x1[i] != ' ') {
		
		cmd[index++] = str_x1[i];
	}
	printf("%s\n", cmd);
	
	i = 0;
	while (str_y1[i] != '\0' && str_y1[i] != ' ') {
		
		cmd[index++] = str_y1[i];
	}
	
	i = 0;
	while (str_z1[i] != '\0' && str_z1[i] != ' ') {
		
		cmd[index++] = str_z1[i];
	}
	
	i = 0;
	while (str_x2[i] != '\0' && str_x2[i] != ' ') {
		
		cmd[index++] = str_x2[i];
	}
	
	i = 0;
	while (str_y2[i] != '\0' && str_y2[i] != ' ') {
		
		cmd[index++] = str_x2[i];
	}
	
	i = 0;
	while (str_z2[i] != '\0' && str_z2[i] != ' ') {
		
		cmd[index++] = str_z2[i];
	}
	
	return cmd;
}

int s_length(char s[]) {
	
	int i = 0;
	
	while (s[i] != '\0') {
		
		i++;
	}
	
	return i;
}

int main(void) {
	
	//print_to_mc();
	create_block(set_block_coords(0, 1, 2, 3, 4, 5, "dirt"));
	
	
	return 0;
}
