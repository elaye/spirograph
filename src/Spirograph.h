#pragma once

#include "ofMain.h"

class Spirograph {

	ofPolyline line;
	ofParameter<float> R, r, rho;
	ofParameter<int> limit;

	public:
		ofParameterGroup parameters;
		Spirograph();
		void regenerate();
		void generate();
		void draw();

		void changeR(float& _R){ regenerate(); }
		void changer(float& _r){ regenerate(); }
		void changerho(float& _rho){ regenerate(); }
		void changeLimit(int& _limit){ regenerate(); }

};