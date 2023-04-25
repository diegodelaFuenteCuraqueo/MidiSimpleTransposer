/*
  ==============================================================================

    MidiProcessor.h
    Created: 24 Apr 2023 11:23:23pm
    Author:  Diego Ignacio de la Fuente Curaqueo

  ==============================================================================
*/

#pragma once

#include  "JuceHeader.h"
using namespace juce;

 class MidiProcessor
{
  public:
    void process (MidiBuffer& midiMessages) {
      MidiBuffer::Iterator it(midiMessages);
      MidiMessage currentMessage;
      
      int samplePos;

      // the iterator is used to check all the events in current buffer
      while (it.getNextEvent(currentMessage, samplePos)) 
      { 
        // this prints all the incoming midiMessages
        DBG (currentMessage.getDescription());
      }
    }
};
