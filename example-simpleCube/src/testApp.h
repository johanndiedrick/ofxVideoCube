#pragma once

#include "ofMain.h"
#include "ofxVideoCube.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

        ofxVideoCube videoCube;
        ofEasyCam cam;
    
};
