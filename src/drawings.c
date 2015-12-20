#include "minecraft.h"

void draw_square(void)
{
    for (int y = 0; y < 10; y++) 
    {
        for (int x = 0; x < 10; x++) 
        {
            create_block(set_block_coords(x, 255, y, x, 255, y, "diamond_ore"));
        }
    }
}


void draw_rectangle(void)
{
    create_block(set_block_coords(0, 255, 0, 20, 255, 20, "dirt"));
}