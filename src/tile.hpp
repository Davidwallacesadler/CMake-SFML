enum class TileType 
{
    FLOOR, // Regular floor
    HOLE,  // A hole that the player can fall through
    FLOOR_WITH_OBJECT, // Floor with a interactable object
    EXIT // Exit tile for the level
};

struct Tile 
{
    TileType type;
    int positionX;
    int positionY;
    bool isRevealed;

    Tile(TileType t, int x, int y, bool revealed): type(t), positionX(x), positionY(y), isRevealed(revealed) {}
};