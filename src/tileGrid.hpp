#include <vector>
#include "tile.hpp"

class TileGrid
{
    // PRIVATE PROPERTIES:
    int tile_size; // The width and height of each tile
    int width;     // The max number of tiles in the x direction
    int height;    // The max number of tiles in the y direction
    std::vector<Tile> tiles; // The tiles that make up the grid
public:
    // CONTRUCTORS:
    TileGrid(int t_size, int w, int h): tile_size(t_size), width(w), height(h) {
        // Create the tile board using the width and height
        int totalAmountOfTiles = w * h;
        for (int row = 0; row < height; row++) {
            for (int column = 0; column < width; column++) {
                tiles.emplace_back(
                    Tile{TileType::FLOOR, column, row, row == 0 }
                );
            }
        }
    };

    // PUBLIC METHODS:
    const void print();
};