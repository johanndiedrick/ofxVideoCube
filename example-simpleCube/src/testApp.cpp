#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    videoCube.setup();
}

//--------------------------------------------------------------
void testApp::update(){
    videoCube.update();
}

//--------------------------------------------------------------
void testApp::draw(){
    cam.begin();
    videoCube.draw();
    cam.end();
}
