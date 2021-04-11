#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0, 0, 0);
    ofSetBackgroundAuto(false);
    ofTranslate(300, 200);
    
    ofTrueTypeFont::setGlobalDpi(72);
    verdana.load("arial.ttf", 40);
    verdana.setLineHeight(24);
    verdana.setLetterSpacing(1.0);
    

    for(int i = 0;i <num;i++){
        pos[i].set(0,0);
        vel[i].set(ofRandom(-1,1),ofRandom(-1,1));
        col[i].set(ofRandom(255),ofRandom(255),ofRandom(255),ofRandom(30,100));
        pos1[i].set(1, 760);
        
        pos2[i].set(1020, 760);
        pos3[i].set(1020, 0);
        
        pos4[i].set(1020, 0);
        pos5[i].set(0,0);
        
        pos6[i].set(0,760);
        pos7[i].set(1020, 760);
    }
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i=0; i<num; i++) {
        pos[i].y = pos[i].y + 10;
        pos1[i].x = pos1[i].x + 10.34;
        
        
        if(pos[i].y > 755 && pos1[i].x > 1015){
            one = 1;
        }
        if(pos2[i].y < 0 && pos3[i].x < 0){
            two = 1;
        }
        if(pos4[i].x < 50 && pos5[i].y > 900){
            three = 1;
        }
        if(pos6[i].x > 1020 && pos7[i].y < 0){
            four = 1;
        }
        
        if(one >= 1){
            pos2[i].y = pos2[i].y - 10;
            pos3[i].x = pos3[i].x - 10.34;
        }
        
        if(two >= 1){
            pos4[i].x = pos4[i].x -10.34;
            pos5[i].y = pos5[i].y + 10;
        }
        
        if(three >= 1){
            pos6[i].x = pos6[i].x + 10.34;
            pos7[i].y = pos7[i].y - 10;
        }
    }
    

}

//--------------------------------------------------------------
void ofApp::draw(){

    if (four >= 1) {
        ofSetColor(30, 200, 200);
        verdana.drawString("finish!!", 460, 360);
    }
    
    
    ofSetColor(255, 180, 0, 1);
    for (int i = 0; i <  num; i++) {
        ofDrawLine(pos[i].x, pos[i].y, pos1[i].x, pos1[i].y);
        ofDrawLine(pos2[i].x, pos2[i].y, pos3[i].x, pos3[i].y);
        ofDrawLine(pos4[i].x, pos4[i].y, pos5[i].x, pos5[i].y);
        ofDrawLine(pos6[i].x, pos6[i].y, pos7[i].x, pos7[i].y);
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
