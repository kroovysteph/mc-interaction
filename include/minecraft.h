#ifndef MINECRAFT_H
#define MINECRAFT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print_to_mc(void);
void draw_square(void);
void create_block(String cmd);
String set_block_coords(int x1, int y1, int z1, int x2, int y2, int z2, String block);