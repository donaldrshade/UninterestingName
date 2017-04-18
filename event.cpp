/*
Project Name: Digital Logic Simulator (Term Project)
Contributors: Jacob Moore and Donald Shade
Date Started: April 6, 2017
File Name: event.cpp
File Purpose: To define the event class
Date Started: April 6, 2017


*/

#include "event.h"

Event::Event(Wire * w, int t, State s, int eventCount){

}

Wire* Event::getWire() {
	return wire;
}

int Event::getTime() {
	return time;
}

State Event::getState() {
	return state;
}

int Event::getEventCount() {
	return eventCount;
}

bool operator< (Event const e, Event const f) {
	bool isTrue = true;
	if (e.time > f.time) {
		isTrue = false;
	}
	else if (e.eventCount > f.eventCount) {
		isTrue = false;
	}
	return isTrue;

}

