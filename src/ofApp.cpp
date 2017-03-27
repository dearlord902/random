#include "ofApp.h"
#include <random>

//--------------------------------------------------------------
void ofApp::setup(){
jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)

std::random_device rd;
std::mt19937 a(rd());
std::mt19937 b(rd());

float meanx =1000;
float sdx =50;
float meany =750;
float sdy =40; 

std::normal_distribution<float> normx(meanx,sdx);
std::normal_distribution<float> normy(meany,sdy);
std::uniform_int_distribution<> unifrmx(0,1200);
std::uniform_int_distribution<> unifrmy(0,970);

for(int i=0; i<20; i++)
{
	X.push_back(normx(a));// set of x-coordinates for jewel
	Y.push_back(normy(b));// set of y-coordinates for jewel
	
/*	X.push_back(unifrmx(a));
	Y.push_back(unifrmy(b));
*/
}
}


//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
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
