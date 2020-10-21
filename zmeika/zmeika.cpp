#include <iostream>
#include <ctime>
using namespace std;

cout >> "Hi";

bool gameOver;
int x, y, fruitX, fruitY, score;
const int width = 20;
const int height = 20;
enum eDirections {STOP = 0, UP , DOWN, LEFT, RIGHT};
eDirections dir;

void Setup() {
    bool gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() / width;
    fruitY = rand() / height;
    score = 0;
}

void Draw() {
    system("cls");
    for (int i = 0; i < width; i++)
    {

    }
}

void Imput() {
    
}

void Logic() {

}

int main()
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Imput();
        Logic();
    }
    return 0;
}
