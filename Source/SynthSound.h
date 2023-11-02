/*
  ==============================================================================

    SynthSound.h
    Created: 26 Oct 2023 11:52:27am
    Author:  Ty Maraist

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class SynthSound : public juce::SynthesiserSound
{
public:
    bool appliesToNote (int midiNoteNumber) override {return true;}
    bool appliesToChannel (int midiChannel) override {return true;}
    
};
