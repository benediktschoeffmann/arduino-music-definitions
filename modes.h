#ifndef _MODES_H
#define _MODES_H
    uint8_t _ionian[8] = { 0, 2, 4, 5, 7, 9, 11, 12 };
    uint8_t _dorian[8] = { 0, 2, 3, 5, 7, 9, 10, 12 };
    uint8_t _phrygian[8] = { 0, 1, 3, 5, 7, 8, 10, 12 };
    uint8_t _lydian[8] = { 0, 2, 4, 6, 7, 9, 11, 12 };
    uint8_t _mixolidian[8] = { 0, 2, 4, 5, 7, 9, 10, 12 };
    uint8_t _aeolian[8] = { 0, 2, 3, 5, 7, 8, 10, 12 };
    uint8_t _locrian[8] = { 0, 1, 3, 5, 6, 8, 10, 12 };

    // MINOR MODES
    uint8_t _melodic[8] = { 0, 2, 3, 5, 7, 9, 11, 12 };     // ascending melodic minor
    uint8_t _phrygian6[8] = { 0, 1, 3, 5, 7, 9, 10, 12 };   // phrygian ♮6 (dorian ♭2)
    uint8_t _lydian5[8] = { 0, 2, 4, 6, 8, 9, 11, 12 };     // lydian augmented (lydian ♯5)
    uint8_t _lydian7[8] = { 0, 2, 4, 6, 7, 9, 10, 12 };     // lydian dominant (also, "lydian ♭7", acoustic scale, or mixolydian ♯4)
    uint8_t _mixolydian6[8] = { 0, 2, 4, 5, 7, 8, 10, 12 }; // mixolydian ♭6 (or melodic major or simply "fifth mode")
    uint8_t _locrian2[8] = { 0, 2, 3, 5, 6, 8, 10, 12 };    // locrian ♮2 (also known as "half-diminished" scale)    
    uint8_t _super_locrian[8] = { 0, 1, 3, 4, 6, 8, 10, 12 }; // super Locrian (also "altered dominant scale", or "altered scale")

#endif