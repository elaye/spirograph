#pragma once

#include "ofMain.h"

#include "ofxGui.h"

#include "Spirograph.h"

class ofApp : public ofBaseApp{

	Spirograph spiro;

	ofEasyCam cam;
	
	ofxPanel gui;

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		
};
