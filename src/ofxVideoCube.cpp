//
//  ofxVideoCube.cpp
//  ofxVideoCube
//
//  Created by Johann Diedrick on 3/4/14.
//
//

#include "ofxVideoCube.h"

#define BOX_DIMENSION 500
//--------------------------------------------------------------
void ofxVideoCube::setup(){
    
    player.loadMovie("movies/fingers.mov");
    player.setVolume(0.0);
    player.play();
    
    //setup front plane
    planeFront.set(BOX_DIMENSION, BOX_DIMENSION, ofGetWidth()/20., ofGetHeight()/20.);
    planeFront.mapTexCoordsFromTexture(player.getTextureReference());
    planeFront.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
    
    //setup back plane
    planeBack.set(BOX_DIMENSION, BOX_DIMENSION, ofGetWidth()/20., ofGetHeight()/20.);
    planeBack.mapTexCoordsFromTexture(player.getTextureReference());
    planeBack.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
    
    //setup left plane
    planeLeft.set(BOX_DIMENSION, BOX_DIMENSION, ofGetWidth()/20., ofGetHeight()/20.);
    planeLeft.mapTexCoordsFromTexture(player.getTextureReference());
    planeLeft.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
    
    //setup right plane
    planeRight.set(BOX_DIMENSION, BOX_DIMENSION, ofGetWidth()/20., ofGetHeight()/20.);
    planeRight.mapTexCoordsFromTexture(player.getTextureReference());
    planeRight.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
    
    //setup top plane
    planeTop.set(BOX_DIMENSION, BOX_DIMENSION, ofGetWidth()/20., ofGetHeight()/20.);
    planeTop.mapTexCoordsFromTexture(player.getTextureReference());
    planeTop.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
    
    //setup bottom plane
    planeBottom.set(BOX_DIMENSION, BOX_DIMENSION, ofGetWidth()/20., ofGetHeight()/20.);
    planeBottom.mapTexCoordsFromTexture(player.getTextureReference());
    planeBottom.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
    
    ofEnableAlphaBlending();
    ofEnableDepthTest();
}

//--------------------------------------------------------------
void ofxVideoCube::update(){
    player.update();
    
}

//--------------------------------------------------------------
void ofxVideoCube::draw(){
    
    //draw front
    player.getTextureReference().bind();
    ofPushMatrix();
    ofRotateX(180); //flip video
    planeFront.draw();
    ofPopMatrix();
    player.getTextureReference().unbind();
    
    //draw back
    player.getTextureReference().bind();
    ofPushMatrix();
    ofRotateX(180);
    ofTranslate(0, 0, -BOX_DIMENSION);
    planeBack.draw();
    ofPopMatrix();
    player.getTextureReference().unbind();
    
    //draw left
    player.getTextureReference().bind();
    ofPushMatrix();
    ofRotateX(180);
    ofTranslate(-BOX_DIMENSION/2, 0, -BOX_DIMENSION/2);
    ofRotateY(90);
    planeLeft.draw();
    ofPopMatrix();
    player.getTextureReference().unbind();
    
    //draw right
    player.getTextureReference().bind();
    ofPushMatrix();
    ofRotateX(180);
    ofTranslate(BOX_DIMENSION/2, 0, -BOX_DIMENSION/2);
    ofRotateY(270);
    planeRight.draw();
    ofPopMatrix();
    player.getTextureReference().unbind();
    
    //draw top
    player.getTextureReference().bind();
    ofPushMatrix();
    ofTranslate(0, BOX_DIMENSION/2, BOX_DIMENSION/2);
    ofRotateX(90);
    planeTop.draw();
    ofPopMatrix();
    player.getTextureReference().unbind();
    
    //draw bottom
    player.getTextureReference().bind();
    ofPushMatrix();
    ofPushStyle();
    ofTranslate(0, -BOX_DIMENSION/2, BOX_DIMENSION/2);
    ofRotateX(-90);
    planeBottom.draw();
    ofPopStyle();
    ofPopMatrix();
    player.getTextureReference().unbind();
    
}
