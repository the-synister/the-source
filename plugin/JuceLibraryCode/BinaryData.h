/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#ifndef BINARYDATA_H_40896557_INCLUDED
#define BINARYDATA_H_40896557_INCLUDED

namespace BinaryData
{
    extern const char*   delayReverse_png;
    const int            delayReverse_pngSize = 169;

    extern const char*   knobstrip_png;
    const int            knobstrip_pngSize = 169;

    extern const char*   lfoGain_png;
    const int            lfoGain_pngSize = 169;

    extern const char*   lfoSampleHold_png;
    const int            lfoSampleHold_pngSize = 169;

    extern const char*   lfoSineWave_png;
    const int            lfoSineWave_pngSize = 169;

    extern const char*   lfoSquareWave_png;
    const int            lfoSquareWave_pngSize = 169;

    extern const char*   oscWaveForms_png;
    const int            oscWaveForms_pngSize = 169;

    extern const char*   seqRandom_png;
    const int            seqRandom_pngSize = 169;

    extern const char*   seqSequential_png;
    const int            seqSequential_pngSize = 169;

    extern const char*   seqUpDown_png;
    const int            seqUpDown_pngSize = 169;

    extern const char*   tempoSync_png;
    const int            tempoSync_pngSize = 169;

    extern const char*   toggleOff_png;
    const int            toggleOff_pngSize = 169;

    extern const char*   toggleOn_png;
    const int            toggleOn_pngSize = 169;

    extern const char*   triplets_png;
    const int            triplets_pngSize = 169;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Number of elements in the namedResourceList array.
    const int namedResourceListSize = 14;

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes) throw();
}

#endif
