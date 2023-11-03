#ifndef POSITION_HH
#define POSITION_HH

class Position
{
public:
    // Constructor
    Position(int x, int y);

    // Construits un Destructor ici plus vite. PLUS VITE


    int getX();
    void setX(int new_x);
    int getY();
    void setY(int new_y);

private:
    int x;
    int y;
}

#endif // POSITION_HH