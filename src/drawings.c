#include "minecraft.h"

void draw_square(void)
{
    for (int y = 0; y < 50; y++) 
    {
        for (int x = 0; x < 50; x++) 
        {
            create_block(set_block_coords(x, 0, y, x, 0, y, "air"));
        }
    }
}