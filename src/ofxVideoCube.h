//
//  ofxVideoCube.h
//  ofxVideoCube
//
//  Created by Johann Diedrick on 3/4/14.
//
//

#ifndef __ofxVideoCube__ofxVideoCube__
#define __ofxVideoCube__ofxVideoCube__

#include "ofMain.h"
#include <iostream>
class ofxVideoCube{
    
public:
    void setup();
    void update();
    void draw();
    
    ofPlanePrimitive planeFront;
    ofPlanePrimitive planeBack;
    ofPlanePrimitive planeLeft;
    ofPlanePrimitive planeRight;
    ofPlanePrimitive planeTop;
    ofPlanePrimitive planeBottom;
    
    ofVideoPlayer player;
    
};


#endif /* defined(__ofxVideoCube__ofxVideoCube__) */
