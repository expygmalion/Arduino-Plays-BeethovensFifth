// Symphony No. 5 in C Minor, Op. 67: I. Allegro con brio (Liszt, Beethoven)

#include <Arduino.h>

const int buzzerPin = 11;

// Frequencies for the notes (adjusted for the key of C minor)
const int freqG3 = 196;    // G3
const int freqAb3 = 208;   // Ab3
const int freqBb3 = 233;   // Bb3
const int freqC4 = 261;    // C4
const int freqD4 = 293;    // D4
const int freqEb4 = 311;   // Eb4
const int freqF4 = 349;    // F4
const int freqG4 = 392;    // G4

// Note sequence matching the sheet music
const int notes[] = {
  // Opening motif
  freqG4, freqG4, freqG4, freqEb4,
  freqF4, freqF4, freqF4, freqD4,
  freqG4, freqG4, freqG4, freqEb4,
  0, 0, 0, 0,  // Rests
  freqG4, freqG4, freqG4, freqG4,
  freqG4, freqG4, freqG4, freqG4,
  // Lower staff (approximation of the bass line)
  freqG3, freqG3, freqG3, freqG3,
  freqG3, freqG3, freqG3, freqG3,
  freqAb3, freqAb3, freqAb3, freqAb3,
  freqG3, freqG3, freqG3, freqG3,
  freqC4, freqC4, freqC4, freqC4,
  freqBb3, freqBb3, freqBb3, freqBb3
};

// Note durations based on tempo marking (Allegro con brio, ♩=108)
const int quarterNote = 556;  // Duration of a quarter note in ms
const int eighthNote = quarterNote / 2;  // 278 ms
const int sixteenthNote = quarterNote / 4;  // 139 ms
const int dottedQuarter = quarterNote + eighthNote;  // 834 ms

const int durations[] = {
  // Upper staff
  eighthNote, eighthNote, eighthNote, dottedQuarter,
  eighthNote, eighthNote, eighthNote, dottedQuarter,
  eighthNote, eighthNote, eighthNote, dottedQuarter,
  eighthNote, eighthNote, eighthNote, eighthNote,
  sixteenthNote, sixteenthNote, sixteenthNote, sixteenthNote,
  sixteenthNote, sixteenthNote, sixteenthNote, sixteenthNote,
  // Lower staff
  quarterNote, quarterNote, quarterNote, quarterNote,
  quarterNote, quarterNote, quarterNote, quarterNote,
  quarterNote, quarterNote, quarterNote, quarterNote,
  quarterNote, quarterNote, quarterNote, quarterNote,
  quarterNote, quarterNote, quarterNote, quarterNote,
  quarterNote, quarterNote, quarterNote, quarterNote
};

const int noteCount = sizeof(notes) / sizeof(notes[0]);

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  for (int i = 0; i < noteCount; i++) {
    if (notes[i] != 0) {
      tone(buzzerPin, notes[i], durations[i]);
    }
    delay(durations[i]);
    noTone(buzzerPin);
    delay(10);  // Short pause between notes
  }
  
  delay(2000);  // Pause before repeating
}
