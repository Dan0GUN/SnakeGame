#ifndef SNAKE_H
#define SNAKE_H

#include <windows.h>
#include <vector>

#define WIDTH 50
#define HEIGHT 25

using namespace std;

class Snake
{
    private:
        COORD pos;
        int len;
        int vel;
        char dir;
        vector<COORD> body;

    public:
        Snake(COORD pos, int vel);
        void direction(char dir);
        void move_snake();
        COORD get_pos();
        
        vector<COORD> get_body();
        bool eaten(COORD food_pos);

        void grow();
        bool collided();
};

#endif