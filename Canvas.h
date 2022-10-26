/*
    Canvas.h - Simple canvas.
 */

#ifndef Canvas_h
	#define Canvas_h
	#ifndef CANVAS_WIDTH
		#define CANVAS_WIDTH 320
	#endif
	
	#ifndef CANVAS_HEIGHT
		#define CANVAS_HEIGHT 170
	#endif
	
	#include "Arduino.h"
	
	class Canvas {
	    
	public:
	    Canvas();
	    void clear();
	    void setPixel(int x, int y, bool on);
	    
	    void drawLine(int startX, int startY, int endX, int endY);
	    void drawCircle(int centreX, int centreY, int radius);
	    void drawSquare(int startX, int startY, int endX, int endY);
	    void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3);
	    
	    char * bitmap();
	    
	    int width();
	    int height();
	    
	    byte _displayMap[CANVAS_WIDTH * CANVAS_HEIGHT / 8];
	};
#endif

