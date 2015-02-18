#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	spiro.generate();
	gui.setup(spiro.parameters);

	glEnable(GL_LINE_SMOOTH);
	glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(ofColor::white);
	ofSetColor(0, 0, 0, 30);
	// ofPushMatrix();
	cam.begin();
		// ofTranslate(ofGetWidth()/2.0, ofGetHeight()/2.0);
		spiro.draw();
	cam.end();
	// ofPopMatrix();

	gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}