#include "Spirograph.h"

Spirograph::Spirograph(){

	step = 0.01;

	parameters.add(R.set("R", 300.0, 0.1, 500.0));
	parameters.add(r.set("r", 50.0, 0.1, 500.0));
	parameters.add(rho.set("rho", 30.0, 0.1, 500.0));
	parameters.add(spirality.set("Spirality", 0.0, 0.0, 1.0));
	parameters.add(limit.set("Limit", 2, 1, 1000));

	R.addListener(this, &Spirograph::changeR);
	r.addListener(this, &Spirograph::changer);
	rho.addListener(this, &Spirograph::changerho);
	limit.addListener(this, &Spirograph::changeLimit);
	spirality.addListener(this, &Spirograph::changeSpirality);
	line.clear();
}

void Spirograph::regenerate(){
	line.clear();
	generate();
}

void Spirograph::generate(){
	line.addVertex(trace(0.0));
	float t = step;
	while( t < limit*2*M_PI){
		line.lineTo(trace(t));
		t += step;
	}
}

ofPoint Spirograph::trace(float t){
	ofPoint p;
	float s = 1 + spirality*(log(t + 1.0) - 1.0);
	p.x = (R-r)*cos(t) + rho*cos((R-r)/r*t);
	p.y = (R-r)*sin(t) - rho*sin((R-r)/r*t);
	return s*p;
}

void Spirograph::draw(){
	line.draw();
}