#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetBackgroundColor(0);
    ofNoFill();
    ofSetLineWidth(2.5);
    
    float offset = 800;
    float radius = 150;
    float time = ofGetElapsedTimef();
    
    for (int j = 0; j <= 1; j++) {
        float displacement = j * 250;
        
        for (int i = 0; i < 16; i++) {
            
            float width = ofMap(i, 0, 15, 0, 200);
            float phase = ofMap(i, 0, 15, 0, 6.28);
            
            float xoffset = 0 + radius * -cos(time + phase);
            float yoffset = 0 + radius * -sin(time + phase);
            
            if (j % 2) {
                xoffset = 0 + radius * -cos(time + phase);
                yoffset = 0 + radius * -sin(time + phase);
               }
            else {
             xoffset = 0 + radius * cos(time + phase);
             yoffset = 0 + radius * -sin(time + phase);
               }
            
            float x1 = (240 + offset + displacement) + xoffset;
            float y1 = (640 - (width * 1.5)) + yoffset;
            float x2 = ((440 + offset + displacement) - width) + xoffset;
            float y2 = (240 + (width * 0.5)) + yoffset;
            float x3 = ((40 + offset + displacement) + width) + xoffset;
            float y3 = (240 + (width * 0.5)) + yoffset;
            
            ofBeginShape();
            ofVertex(x1, y1);
            ofVertex(x2, y2);
            ofVertex(x3, y3);
            ofEndShape(true);
        }
        
        if (j % 2) {
          ofSetColor(230,75,80,84);
        }
        else {
          ofSetColor(255,210,240,144);
        }
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
