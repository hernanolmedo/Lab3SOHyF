#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

int randomPosition();
int whoLives();
void printScreen(int height,int width,char **matrix);
void move(int posX,int posY,char **matrix);
int positionCheker(int posX,int posY,char **matrix);
int gameOver(int height,int width,char **matrix);
void shoot(int posX,int posY,char **matrix,int **infoMatrix);
int dead(int posX,int posY);
void corpses(int height,int width,char **matrix,int **infoMatrix);

#endif
