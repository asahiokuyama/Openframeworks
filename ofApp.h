#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    static const int num = 50;
    ofVec2f pos[num];
    ofVec2f pos1[num];
    
    ofVec2f pos2[num];
    ofVec2f pos3[num];
    
    ofVec2f pos4[num];
    ofVec2f pos5[num];
    
    ofVec2f pos6[num];
    ofVec2f pos7[num];
    
    ofVec2f vel[num];
    
    ofColor col[num];
    
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    
    ofTrueTypeFont verdana;
		
};
