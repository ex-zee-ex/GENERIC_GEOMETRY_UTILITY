/*
 * Copyright (c) 2013 Dan Wilcox <danomatika@gmail.com>
 *
 * BSD Simplified License.
 * For information on usage and redistribution, and for a DISCLAIMER OF ALL
 * WARRANTIES, see the file, "LICENSE.txt," in this distribution.
 *
 * See https://github.com/danomatika/ofxMidi for documentation
 *
 */
#pragma once

#include "ofMain.h"
#include "ofxMidi.h"
//#include "ofxOMXVideoGrabber.h"

class ofApp : public ofBaseApp, public ofxMidiListener {
	
public:
	
	void setup();
	void update();
	void draw();
	void exit();
	
	void keyPressed(int key);
	void keyReleased(int key);
	
	
	void newMidiMessage(ofxMidiMessage& eventArgs);
	
	ofxMidiIn midiIn;
	std::vector<ofxMidiMessage> midiMessages;
	std::size_t maxMessages = 10; //< max number of messages to keep track of
	
	void midiSetup();
	void midiBiz();
	
	ofShader shaderGeometry;
	
    ofFbo framebuffer0;
    ofFbo framebuffer1;
    ofFbo framebuffer2;
    
    ofFbo aspectFixFb;
    void allocateAndDeclareSundries();
	void inputSetup();
	void inputUpdate();
    
    ofVideoGrabber input1;
    
     /*
    void omx_settings();
	void omx_updates();
	ofxOMXCameraSettings settings;
    ofxOMXVideoGrabber videoGrabber;
    */
    
};
