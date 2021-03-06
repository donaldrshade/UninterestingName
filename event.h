/*
Project Name: Digital Logic Simulator (Term Project)
Contributors: Jacob Moore and Donald Shade
Date Started: April 6, 2017
File Name: event.h
File Purpose: To create a event class
Date Started: April 6, 2017


*/

#ifndef event_h
#define event_h
#include "wire.h"

#include <iostream>
#include <queue>

class Event{
public:
	Event(Wire* w, int t, State s, int eventCount);
	friend bool operator< (Event &e, Event &f);
private:
    Wire* wire;
    int t;
    State state;
    int eventCount;
    
};

#endif
