#pragma once

#include "ofMain.h"

class Spirograph {

	ofPolyline line;
	ofParameter<float> R, r, rho, spirality;
	ofParameter<int> limit;

	float step;

	public:
		ofParameterGroup parameters;
		Spirograph();
		void regenerate();
		void generate();
		ofPoint trace(float t);
		void draw();

		void changeR(float& _R){ regenerate(); }
		void changer(float& _r){ regenerate(); }
		void changerho(float& _rho){ regenerate(); }
		void changeSpirality(float& _spirality){ regenerate(); }
		void changeLimit(int& _limit){ regenerate(); }

};