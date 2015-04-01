#pragma once

class OptixScene {
public:
	const unsigned width, height;
	OptixScene(unsigned w, unsigned h) : width(w), height(h) { }
	virtual ~OptixScene() { }

	virtual void setTarget(unsigned vbo) { }
	virtual void update(double time) { }
	virtual void render() { }

	virtual void keyPressed(int key) { }
	virtual void keyReleased(int key) { }
	virtual void mousePressed(int button) { }
	virtual void mouseMoved(double x, double y, double dx, double dy) { }
};