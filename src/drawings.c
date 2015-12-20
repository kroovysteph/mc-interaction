#include "minecraft.h"

void draw_square(void)
{
    for (int y = 0; y < 20; y++) 
    {
        for (int x = 0; x < 20; x++) 
        {
            create_block(set_block_coords(x, 90, y, x, 90, y, "dirt"));
        }
    }
}