# Arduino-Plays-BeethovensFifth
I made the arduino play Symphony No. 5 in C Minor, Op. 67: I. Allegro con brio (Liszt, Beethoven)



### In this project, I’ve implemented a version of Beethoven's Fifth Symphony using an Arduino and a buzzer. I mapped the frequencies of the notes and programmed the sequence to play the famous opening motif along with an approximation of the bass line.

## Key Details:

Consider the music sheet: [MusicSheet](https://github.com/expygmalion/Arduino-Plays-BeethovensFifth/blob/master/SymphonieV.png)



- Tempo Marking: "Allegro con brio" with ♩=108, which translates to a quarter note duration of approximately 556 ms.

- Time Signature: 2/4, making each measure last about 1112 ms. (60000 ms / 108 = 555.56 ms).

## Frequencies Used:

- G3: 196 Hz
- Ab3: 208 Hz
- Bb3: 233 Hz
- C4: 261 Hz
- D4: 293 Hz
- Eb4: 311 Hz
- F4: 349 Hz
- G4: 392 Hz
    ## Frequencies mapped as: 
```cpp
const int freqG3 = 196;    // G3
const int freqAb3 = 208;   // Ab3
const int freqBb3 = 233;   // Bb3
const int freqC4 = 261;    // C4
const int freqD4 = 293;    // D4
const int freqEb4 = 311;   // Eb4
const int freqF4 = 349;    // F4
const int freqG4 = 392;    // G4

---

## Code Functionality: 

The code plays a sequence of notes, using different durations to approximate the musical structure. Each note’s frequency and duration are specified to create an accurate representation of the piece. Short pauses are added between notes to improve the sound quality.
[^1]: Feel free to explore and modify the code to experiment with different segments or to fine-tune the musical output, for me, it was quite the deafening produce, i'm sure my music teacher along with the entire musical heritage are cursing me for doing this. 
