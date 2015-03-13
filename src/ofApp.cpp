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

	cam.begin();
		spiro.draw();
	cam.end();

	gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}