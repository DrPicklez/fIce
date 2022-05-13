#ifndef ELEMENTS_H
#define ELEMENTS_H
#include "ofMain.h"
#include "ofxFluid.h"


class Elements
{
public:
    void setup();
    void update();
    void draw();
    ofxFluid element;
    int wid, hig;
    ofVec2f oldM;
};

#endif // ELEMENTS_H
