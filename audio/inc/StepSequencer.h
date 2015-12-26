/*
  ==============================================================================

    StepSequencer.h
    Created: 6 Dec 2015 11:52:10am
    Author:  Nhat

  ==============================================================================
*/

#ifndef STEPSEQUENCER_H_INCLUDED
#define STEPSEQUENCER_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

#include "SynthParams.h"

class StepSequencer
{
public:
    //==============================================================================
    StepSequencer(SynthParams &p);
    ~StepSequencer();
    //==============================================================================
    void runSeq(MidiBuffer& midiMessages, int bufferSize, double sampleRate);

    int getCurrentSeqNote();

    void setPlayRandomNotes(bool shouldPlay);
    void setPlayRandomSeqNotes(bool shouldPlay);

    bool isPlaying();
    bool isNoteMuted(int index);

private:
    //==============================================================================
    void seqNoHostSync(MidiBuffer& midiMessages, int bufferSize, double sampleRate);
    void seqHostSync(MidiBuffer& midiMessages);
    void midiNoteChanged(MidiBuffer& midiMessages);
    void stopSeq(MidiBuffer& midiMessages);
    //==============================================================================
    SynthParams &params;

    // StepSequencer gui params
    std::array<int, 8> prevMidiSeq;
    std::array<int, 8> currMidiSeq;
    std::array<eOnOffToggle, 8> prevOnOffStep;
    std::array<eOnOffToggle, 8> currOnOffStep;
    eSeqModes seqMode;
    int seqNumSteps;
    float seqStepSpeed;
    double seqNoteLength;

    // internal StepSequencer variables
    int seqNote;
    double seqNextStep;
    double stopNoteTime;
    int nextPlaySample;
    int noteOffSample;
    bool seqIsPlaying;

    bool randomSeqNotes;
    bool randomNotes;
};
#endif  // STEPSEQUENCER_H_INCLUDED