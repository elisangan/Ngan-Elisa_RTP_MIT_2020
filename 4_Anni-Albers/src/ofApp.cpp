#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetBackgroundColor(200, 200, 150);
    
    float width = (ofGetWidth() - 96) / 12;
    
    ofSeedRandom(0);
    
    int row_patterns[] = {1,2,3,1,2,2,3,1,2,2,3,3,1,1,2};
    int line_patterns[] = {0,1,2,3,4,1,2,3,4,1,5,5,0,3,4};
//    int column_patterns[] = {1,2,2,2,1,4,5};

    for (int rows = 0; rows < 15; rows++){
        
        int row_pattern = row_patterns[rows];
        int line_pattern = line_patterns[rows];
        
        
        for (int columns = 0; columns < 12; columns++){
//            int column_pattern = column_patterns[columns];
            
            // alternating black and white rows
            if (rows % 2 == 0){
                ofSetColor(0);
            }
            else {
                ofSetColor(255);
            }
            
            // colored square patterns
            if (row_pattern == 1){
                if (columns == 0 or columns == 2 or columns == 3 or columns == 4 or columns == 5 or columns == 7 or columns == 9 or columns == 10){
                    if (rows % 2 == 0){
                        ofSetColor(180,175,125);
                    }
                    else {
                        ofSetColor(145,135,100);
                    }
                }
            }
            
            else if (row_pattern == 2){
                if (columns == 1 or columns == 2 or columns == 4 or columns == 6 or columns == 7 or columns == 8 or columns == 10 or columns == 11) {
                    if (rows % 2 == 0){
                        ofSetColor(180,175,125);
                    }
                    else {
                        ofSetColor(145,135,100);
                    }
                }
            }
            
            else {
                if (columns == 0 or columns == 1 or columns == 3 or columns == 5 or columns == 6 or columns == 8 or columns == 9 or columns == 11) {
                    if (rows % 2 == 0){
                        ofSetColor(180,175,125);
                    }
                    else {
                        ofSetColor(145,135,100);
                    }
                }
            }
            
            ofDrawRectangle(columns*width + 48, rows*width + 48, width, width);
            
            // drawing lines
            ofSetLineWidth(1.75);
            float dice = ofRandom(1,2);
            
            if (rows % 2 == 0){
                ofSetColor(255);
            }
            else {
                ofSetColor(0);
            }
            
            if (line_pattern == 1){
                if (columns == 0 or columns == 3 or columns == 5 or columns == 9){
                    ofDrawLine((columns*width) + 48, (rows*width) + 48 + (0.5*width), (columns*width) + 48 + width, (rows*width) + 48 + (0.5*width));
                }
            }
            else if (line_pattern == 2){
                if (columns == 4){
                    ofDrawLine((columns*width) + 48, (rows*width) + 48 + (0.5*width), (columns*width) + 48 + width, (rows*width) + 48 + (0.5*width));
                    
                }
                if (columns == 2 or columns == 7 or columns == 10){
                    ofDrawLine((columns*width) + 48, (rows*width) + 48 + (0.5*width), (columns*width) + 48 + width, (rows*width) + 48 + (0.5*width));
                    ofDrawLine((columns*width) + (0.5*width) + 48, rows*width + 48, (columns*width) + (0.5*width) + 48, rows*width + width + 48);
                }
            }
            else if (line_pattern == 3){
                if (columns == 1 or columns == 6 or columns == 8 or columns == 11){
                    ofDrawLine((columns*width) + 48, (rows*width) + 48 + (0.5*width), (columns*width) + 48 + width, (rows*width) + 48 + (0.5*width));
                }
            }
            else if (line_pattern == 0){
                dice = ofRandom(1,2);
                if (columns == 1 or columns == 6 or columns == 8 or columns == 11) {
                    if (dice > 1.5){
                    ofDrawLine((columns*width) + 48, (rows*width) + 48 + (0.5*width), (columns*width) + 48 + width, (rows*width) + 48 + (0.5*width));
                    ofDrawLine((columns*width) + (0.5*width) + 48, rows*width + 48, (columns*width) + (0.5*width) + 48, rows*width + width + 48);
                }
                    else {
                    ofDrawLine((columns*width) + 48, (rows*width) + 48 + (0.5*width), (columns*width) + 48 + width, (rows*width) + 48 + (0.5*width));
                    }
                }
            }
            else if (line_pattern == 4){
                dice = ofRandom(1,2);
                if (columns == 0 or columns == 3 or columns == 5 or columns == 9) {
                    if (dice > 1.5){
                    ofDrawLine((columns*width) + 48, (rows*width) + 48 + (0.5*width), (columns*width) + 48 + width, (rows*width) + 48 + (0.5*width));
                    ofDrawLine((columns*width) + (0.5*width) + 48, rows*width + 48, (columns*width) + (0.5*width) + 48, rows*width + width + 48);
                }
                    else {
                    ofDrawLine((columns*width) + 48, (rows*width) + 48 + (0.5*width), (columns*width) + 48 + width, (rows*width) + 48 + (0.5*width));
                    }
                }
            }
            else if (line_pattern == 5){
                dice = ofRandom(1,2);
                if (columns == 2 or columns == 4 or columns == 7 or columns == 10){
                    if (dice > 1.5){
                    ofDrawLine((columns*width) + 48, (rows*width) + 48 + (0.5*width), (columns*width) + 48 + width, (rows*width) + 48 + (0.5*width));
                    ofDrawLine((columns*width) + (0.5*width) + 48, rows*width + 48, (columns*width) + (0.5*width) + 48, rows*width + width + 48);
                }
                    else {
                    ofDrawLine((columns*width) + 48, (rows*width) + 48 + (0.5*width), (columns*width) + 48 + width, (rows*width) + 48 + (0.5*width));
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
