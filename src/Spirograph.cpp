#include "Spirograph.h"

Spirograph::Spirograph(){

	parameters.add(R.set("R", 300.0, 0.1, 500.0));
	parameters.add(r.set("r", 50.0, 0.1, 500.0));
	parameters.add(rho.set("rho", 30.0, 0.1, 500.0));
	parameters.add(limit.set("Limit", 2, 1, 1000));

	R.addListener(this, &Spirograph::changeR);
	r.addListener(this, &Spirograph::changer);
	rho.addListener(this, &Spirograph::changerho);
	limit.addListener(this, &Spirograph::changeLimit);
	line.clear();
}

void Spirograph::regenerate(){
	line.clear();
	generate();
}

void Spirograph::generate(){
	line.addVertex(R-r+rho, 0.0);
	float x = 0.0, y = 0.0;
	float t = 0.01;
	while( t < limit*2*M_PI){
		x = (R-r)*cos(t) + rho*cos((R-r)/r*t);
		y = (R-r)*sin(t) - rho*sin((R-r)/r*t);
		line.lineTo(x, y);
		t += 0.01;
	}
}

void Spirograph::draw(){
	line.draw();
}