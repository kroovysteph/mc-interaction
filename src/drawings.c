#include "minecraft.h"

void draw_square(void)
{
    for (int y = 0; y < 50; y++) 
    {
        for (int x = 0; x < 50; x++) 
        {
            create_block(set_block_coords(x, 100, y, x, 100, y, "air"));
        }
    }
}


void draw_rectangle(void)
{
    create_block(set_block_coords(0, 255, 0, 100, 255, 50, "dirt"));
}