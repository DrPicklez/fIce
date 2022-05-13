#include "elements.h"
//----------------------------------------------------------------
void Elements::setup(){

    wid = ofGetWidth();
    hig = ofGetHeight();
    element.allocate(wid, hig, 0.5);
    element.dissipation = 0.99;
    element.velocityDissipation = 0.99;
    element.setGravity(ofVec2f(0.0,0.0));
    element.begin();

    element.end();
    element.setUseObstacles(false);
    element.addConstantForce(ofPoint(wid*0.5,hig*0.85), ofPoint(0,-2), ofFloatColor(0.5,0.1,0.0), 10.f);
}
//----------------------------------------------------------------
void Elements::update()
{
    ofPoint m = ofPoint(ofGetMouseX(),ofGetMouseY());
    ofPoint d = (m - oldM)*10.0;
    oldM = m;
    ofPoint c = ofPoint(640*0.5, 480*0.5) - m;
    c.normalize();

    element.addTemporalForce(m, d, ofFloatColor(c.x,c.y,0.5)*sin(ofGetElapsedTimef()),3.0f);
    element.update();

}
//----------------------------------------------------------------
void Elements::draw()
{
    element.draw();

}
