#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(255, 255,255);
    ofNoFill();
    ofSetLineWidth(2);
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofSeedRandom(0);
    
    int chaos = ofRandom(mouseX);
            
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            
            float x = ofMap(i, 0, 5, 100, 600);
            float y = ofMap(j, 0, 5, 100, 600);
            
                //two rolls
                for (int k = 0; k <= 1; k++) {
                    
                    int dice = ofRandom(1,12);
                    
                    //yellow
                    if (dice >= 1 && dice <= 3) {
                        ofSetColor(255,180,60,128);
                    }
                    //aqua
                    else if (dice >= 4 && dice <= 6) {
                        ofSetColor(60,215,180,128);
                    }
                    //blue
                    else if (dice >= 7 && dice <= 9) {
                        ofSetColor(60,60,210,128);
                    }
                    //purple
                    else if (dice >= 10 && dice <= 12) {
                        ofSetColor(130,60,215,128);
                    }
                    
                    for (int z = 0; z < 6; z++) {
                        ofBeginShape();
                        ofVertex(x + 1 + ofRandom((-1*chaos),chaos), y + 1 + ofRandom((-1*chaos),chaos));
                        ofVertex(x + 100 + ofRandom((-1*chaos),chaos), y + 1 + ofRandom((-1*chaos),chaos));
                        ofVertex(x + 100 + ofRandom((-1*chaos),chaos), y + 100 + ofRandom((-1*chaos),chaos));
                        ofVertex(x + 1 + ofRandom((-1*chaos),chaos), y + 100 + ofRandom((-1*chaos),chaos));
                        ofEndShape(true);
                    }
                    
                    if (dice % 2 == 0) {
                        ofSetColor(0,0,0,128);
                        for (int z = 0; z < 6; z++) {
                            ofBeginShape();
                            ofVertex(x + 1 + ofRandom((-1*chaos),chaos), y + 1 + ofRandom((-1*chaos),chaos));
                            ofVertex(x + 100 + ofRandom((-1*chaos),chaos), y + 1 + ofRandom((-1*chaos),chaos));
                            ofVertex(x + 100 + ofRandom((-1*chaos),chaos), y + 100 + ofRandom((-1*chaos),chaos));
                            ofVertex(x + 1 + ofRandom((-1*chaos),chaos), y + 100 + ofRandom((-1*chaos),chaos));
                            ofEndShape(true);
                        }
                    }
                }
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
