#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //font.load("framd.tff", 100);
    ofTrueTypeFontSettings settings("CP-Font.ttf", 100);
    settings.antialiased = true;
    settings.contours = true;
    settings.dpi = 72;
    settings.direction = OF_TTF_LEFT_TO_RIGHT;
    settings.addRange(ofUnicode::Hiragana);
    settings.addRange(ofUnicode::Katakana);
    font.load(settings);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetBackgroundColor(255);
    ofNoFill();
   
//    ofDrawBitmapString("mouse x: " + ofToString(mouseX), 10, 10);
//    ofDrawBitmapString("mouse y height: " + ofToString(mouseY), 30, 30);

    
    ofSetColor(0);
    font.drawString("モリサワ", 200, 200);
    
    ofSetColor(0, 0, 0, 144);
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    vector <ofPath> first = font.getStringAsPoints("モ");
    ofTranslate(200,200);

    //get vector data from type; move paths (character) into position
    vector <ofPath> second = font.getStringAsPoints("リ");
    
//    vector <string> chars =" {"モ", "リ"};
    vector <string> chars = {"モ","リ","サ","ワ"};
    
    //ofTranslate(200,200 + stringWidth);
    
    //[TODO] handle blend mode start & end

    int w = 0;
    for  (int g = 0; g <=3 ; g++) {
    ofEnableBlendMode(OF_BLENDMODE_MULTIPLY);
    ofPushMatrix();
    vector <ofPath> c = font.getStringAsPoints(chars[g]);
    
    ofRectangle bounds = font.getStringBoundingBox(chars[g], 0, 0);
    float stringWidth = bounds.width;
    float centerLine = stringWidth / 2;
        ofTranslate(w, 0);
        w += stringWidth;

        for (int h = 0; h < ofGetHeight(); h++) {

            //for each character, get points and put it in a list
            for (int i = 0; i < c.size(); i++) {
                
                
                c[i].setPolyWindingMode(OF_POLY_WINDING_ODD);
                vector <ofPolyline> lines = c[i].getOutline();
                
                //for each list of points per character, space the points out evenly
                for (int j = 0; j < lines.size(); j++) {
                    lines[j] = lines[j].getResampledBySpacing(0.1);

                    //translate and scale by a factor
                    ofTranslate(3, 6.2);
                    ofRotateYDeg(3);
                    
                    
                    //[TODO] need to handle phasing in here somehow...
                    ofScale(0.99, 0.99, 0.99);
                    
                    
                    //for each points within a list, draw a circle
                    for (int k = 0; k < lines[j].size(); k++) {
                        ofSetColor(0, 0, 0, 50);
                        ofDrawCircle(lines[j][k],0.05);
                        trail.draw();
                    }
                }
            }
        }
        ofPopMatrix();
        ofDisableBlendMode();
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
