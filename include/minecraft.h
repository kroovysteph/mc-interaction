#ifndef MINECRAFT_H
#define MINECRAFT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print_to_mc(void);
void create_block(char *cmd);
char *set_block_coords(int x1, int y1, int z1, int x2, int y2, int z2, char block[]);
char *s_concat(char x[], char y[]);
char *s_of_int(int i);

void draw_rectangle(void);
void draw_square(void);

#endif