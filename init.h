#ifndef INIT_H_INCLUDED
#define INIT_H_INCLUDED

int init(char *title, int xpos,int ypos,int height, int width,int flags,game *myGame, font *mFont, SDL_Rect *j1, SDL_Rect *j2, int *score1, int *score2, balle_jeu *balle);
void init_balle(balle_jeu *balle);
void init_raquettes(SDL_Rect *j1, SDL_Rect *j2);


#endif // INIT_H_INCLUDED
