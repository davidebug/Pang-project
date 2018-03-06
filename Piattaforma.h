#ifndef PIATTAFORMA_H
#define PIATTAFORMA_H
#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"

class Piattaforma  {
private:
	float 	dim;
  	int 	posX,
			posY;
  	ALLEGRO_BITMAP *bitmap;

public:
  	Piattaforma(float, int, int);
  	~Piattaforma()  { al_destroy_bitmap(bitmap); }
	ALLEGRO_BITMAP* getBitmap() const  { return bitmap; }
	int getX() const  { return posX; }
	int getY() const  { return posY; }
	float getDim() const  { return dim; }
	void setBitmap(ALLEGRO_BITMAP *b_map)  { bitmap=b_map; }
	void setX(int x)  { posX=x; }
	void setY(int y)  { posY=y; }
	void setDim(float d)  { dim=d; }
	void Draw(int H)  { al_draw_bitmap(bitmap,posX,posY,0); }
};

Piattaforma::Piattaforma(float d, int x, int y)  {
	dim =d;
	posX = x;
	posY = y;
	bitmap = al_load_bitmap("images/piattaforma.png");
}
#endif