#include <iostream>
#include "tileGrid.hpp"

const void TileGrid::print() 
{
    for (int row = 0; row < height; row++) 
    {
        for(int column = 0; column < width; column++) 
        {
            std::cout << "Theres a tile at: " << column << " , " << row << " is Revealed: " << tiles[row + column].isRevealed << "\n";
        }
    }
}