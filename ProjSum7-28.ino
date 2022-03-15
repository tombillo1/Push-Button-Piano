/**
 * Arduino Piano Project
 * Rubas Khalid, Tommy Billington, Saad Abdullah
 * Version: Pre-release 1.2
 * Last Updated: 6/27/2021 (Changelog below)
 */

#include <LiquidCrystal_I2C.h>

int POT_octave = 1;   // potentiometer

int BUT_C = 2;   // push-buttons...
int BUT_CS = 3;
int BUT_D = 4;
int BUT_DS = 5;
int BUT_E = 6;
int BUT_F = 7;
int BUT_FS = 8;
int BUT_G = 9;
int BUT_GS = 10;
int BUT_A = 11;
int BUT_AS = 12;
int BUT_B = 13;
int SPKR = 14;   // speaker

int SW_rcrd = 18;   // recording switch
int SW_play = 17;   // playback on switch
int BUT_play = 16;  // playback notes button

int key;
int index = 0;
int arrRec[10];

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // put your setup code here, to run once:
  pinMode(BUT_C, INPUT);
  pinMode(BUT_D, INPUT);
  pinMode(BUT_E, INPUT);
  pinMode(BUT_F, INPUT);
  pinMode(BUT_G, INPUT);
  pinMode(BUT_A, INPUT);
  pinMode(BUT_B, INPUT);
  pinMode(BUT_AS, INPUT);
  pinMode(BUT_CS, INPUT);
  pinMode(BUT_DS, INPUT);
  pinMode(BUT_FS, INPUT);
  pinMode(BUT_GS, INPUT);
  pinMode(SPKR, OUTPUT); 
  pinMode(SW_rcrd, INPUT);
  pinMode(SW_play, INPUT);
  pinMode(BUT_play, INPUT);

  lcd.init(); 
  lcd.backlight();
}

void playOctaveOne() {
  int note_C = digitalRead(BUT_C);
  int note_D = digitalRead(BUT_D);
  int note_E = digitalRead(BUT_E);
  int note_F = digitalRead(BUT_F);
  int note_G = digitalRead(BUT_G);
  int note_A = digitalRead(BUT_A);
  int note_B = digitalRead(BUT_B);
  int note_AS = digitalRead(BUT_AS);
  int note_CS = digitalRead(BUT_CS); 
  int note_DS = digitalRead(BUT_DS); 
  int note_FS = digitalRead(BUT_FS); 
  int note_GS = digitalRead(BUT_GS); 
  
  if (note_C) {
    tone(SPKR, 33, 100);  
  }
  else if (note_CS) {
    tone(SPKR, 34, 100);
  } 
  else if (note_D) {
    tone(SPKR, 37, 100);
  }
  else if (note_DS) {
    tone(SPKR, 39, 100);
  } 
  else if (note_E) {
    tone(SPKR, 41, 100);
  } 
  else if (note_F) {
    tone(SPKR, 44, 100);
  }
  else if (note_FS) {
    tone(SPKR, 46, 100);
  }
  else if (note_G) {
    tone(SPKR, 49, 100);
  }
  else if (note_GS) {
    tone(SPKR, 52, 100);
  }
  else if (note_A) {
    tone(SPKR, 55, 100);
  }
  else if (note_AS) {
    tone(SPKR, 58, 100);
  }
  else if (note_B) {
    tone(SPKR, 62, 100);
  }
}

void playOctaveTwo() {
  int note_C = digitalRead(BUT_C);
  int note_D = digitalRead(BUT_D);
  int note_E = digitalRead(BUT_E);
  int note_F = digitalRead(BUT_F);
  int note_G = digitalRead(BUT_G);
  int note_A = digitalRead(BUT_A);
  int note_B = digitalRead(BUT_B);
  int note_AS = digitalRead(BUT_AS);
  int note_CS = digitalRead(BUT_CS); 
  int note_DS = digitalRead(BUT_DS); 
  int note_FS = digitalRead(BUT_FS); 
  int note_GS = digitalRead(BUT_GS); 
  
  if (note_C) {
    tone(SPKR, 65, 100);  
  }
  else if (note_CS) {
    tone(SPKR, 69, 100);
  } 
  else if (note_D) {
    tone(SPKR, 73, 100);
  }
  else if (note_DS) {
    tone(SPKR, 78, 100);
  } 
  else if (note_E) {
    tone(SPKR, 82, 100);
  } 
  else if (note_F) {
    tone(SPKR, 87, 100);
  }
  else if (note_FS) {
    tone(SPKR, 92, 100);
  }
  else if (note_G) {
    tone(SPKR, 98, 100);
  }
  else if (note_GS) {
    tone(SPKR, 104, 100);
  }
  else if (note_A) {
    tone(SPKR, 110, 100);
  }
  else if (note_AS) {
    tone(SPKR, 117, 100);
  }
  else if (note_B) {
    tone(SPKR, 123, 100);
  }
}

void playOctaveThree() {
  int note_C = digitalRead(BUT_C);
  int note_D = digitalRead(BUT_D);
  int note_E = digitalRead(BUT_E);
  int note_F = digitalRead(BUT_F);
  int note_G = digitalRead(BUT_G);
  int note_A = digitalRead(BUT_A);
  int note_B = digitalRead(BUT_B);
  int note_AS = digitalRead(BUT_AS);
  int note_CS = digitalRead(BUT_CS); 
  int note_DS = digitalRead(BUT_DS); 
  int note_FS = digitalRead(BUT_FS); 
  int note_GS = digitalRead(BUT_GS); 
  
  if (note_C) {
    tone(SPKR, 131, 100);  
  }
  else if (note_CS) {
    tone(SPKR, 139, 100);
  } 
  else if (note_D) {
    tone(SPKR, 147, 100);
  }
  else if (note_DS) {
    tone(SPKR, 156, 100);
  } 
  else if (note_E) {
    tone(SPKR, 165, 100);
  } 
  else if (note_F) {
    tone(SPKR, 175, 100);
  }
  else if (note_FS) {
    tone(SPKR, 185, 100);
  }
  else if (note_G) {
    tone(SPKR, 196, 100);
  }
  else if (note_GS) {
    tone(SPKR, 208, 100);
  }
  else if (note_A) {
    tone(SPKR, 220, 100);
  }
  else if (note_AS) {
    tone(SPKR, 233, 100);
  }
  else if (note_B) {
    tone(SPKR, 247, 100);
  }
}

void playOctaveFour() {
  int note_C = digitalRead(BUT_C);
  int note_D = digitalRead(BUT_D);
  int note_E = digitalRead(BUT_E);
  int note_F = digitalRead(BUT_F);
  int note_G = digitalRead(BUT_G);
  int note_A = digitalRead(BUT_A);
  int note_B = digitalRead(BUT_B);
  int note_AS = digitalRead(BUT_AS);
  int note_CS = digitalRead(BUT_CS); 
  int note_DS = digitalRead(BUT_DS); 
  int note_FS = digitalRead(BUT_FS); 
  int note_GS = digitalRead(BUT_GS); 

  if (note_C) {
    tone(SPKR, 261, 100);  
  }
  else if (note_CS) {
    tone(SPKR, 277, 100);
  } 
  else if (note_D) {
    tone(SPKR, 294, 100);
  }
  else if (note_DS) {
    tone(SPKR, 311, 100);
  } 
  else if (note_E) {
    tone(SPKR, 330, 100);
  } 
  else if (note_F) {
    tone(SPKR, 349, 100);
  }
  else if (note_FS) {
    tone(SPKR, 370, 100);
  }
  else if (note_G) {
    tone(SPKR, 392, 100);
  }
  else if (note_GS) {
    tone(SPKR, 415, 100);
  }
  else if (note_A) {
    tone(SPKR, 440, 100);
  }
  else if (note_AS) {
    tone(SPKR, 466, 100);
  }
  else if (note_B) {
    tone(SPKR, 494, 100);
  }
}

void playOctaveFive() {
  int note_C = digitalRead(BUT_C);
  int note_D = digitalRead(BUT_D);
  int note_E = digitalRead(BUT_E);
  int note_F = digitalRead(BUT_F);
  int note_G = digitalRead(BUT_G);
  int note_A = digitalRead(BUT_A);
  int note_B = digitalRead(BUT_B);
  int note_AS = digitalRead(BUT_AS);
  int note_CS = digitalRead(BUT_CS); 
  int note_DS = digitalRead(BUT_DS); 
  int note_FS = digitalRead(BUT_FS); 
  int note_GS = digitalRead(BUT_GS); 
  
  if (note_C) {
    tone(SPKR, 523, 100);  
  }
  else if (note_CS) {
    tone(SPKR, 554, 100);
  } 
  else if (note_D) {
    tone(SPKR, 587, 100);
  }
  else if (note_DS) {
    tone(SPKR, 622, 100);
  } 
  else if (note_E) {
    tone(SPKR, 659, 100);
  } 
  else if (note_F) {
    tone(SPKR, 698, 100);
  }
  else if (note_FS) {
    tone(SPKR, 740, 100);
  }
  else if (note_G) {
    tone(SPKR, 784, 100);
  }
  else if (note_GS) {
    tone(SPKR, 831, 100);
  }
  else if (note_A) {
    tone(SPKR, 880, 100);
  }
  else if (note_AS) {
    tone(SPKR, 932, 100);
  }
  else if (note_B) {
    tone(SPKR, 988, 100);
  }
}

void playOctaveSix() {
  int note_C = digitalRead(BUT_C);
  int note_D = digitalRead(BUT_D);
  int note_E = digitalRead(BUT_E);
  int note_F = digitalRead(BUT_F);
  int note_G = digitalRead(BUT_G);
  int note_A = digitalRead(BUT_A);
  int note_B = digitalRead(BUT_B);
  int note_AS = digitalRead(BUT_AS);
  int note_CS = digitalRead(BUT_CS); 
  int note_DS = digitalRead(BUT_DS); 
  int note_FS = digitalRead(BUT_FS); 
  int note_GS = digitalRead(BUT_GS); 
  
  if (note_C) {
    tone(SPKR, 1047, 100);  
  }
  else if (note_CS) {
    tone(SPKR, 1109, 100);
  } 
  else if (note_D) {
    tone(SPKR, 1175, 100);
  }
  else if (note_DS) {
    tone(SPKR, 1245, 100);
  } 
  else if (note_E) {
    tone(SPKR, 1319, 100);
  } 
  else if (note_F) {
    tone(SPKR, 1397, 100);
  }
  else if (note_FS) {
    tone(SPKR, 1480, 100);
  }
  else if (note_G) {
    tone(SPKR, 1568, 100);
  }
  else if (note_GS) {
    tone(SPKR, 1661, 100);
  }
  else if (note_A) {
    tone(SPKR, 1760, 100);
  }
  else if (note_AS) {
    tone(SPKR, 1865, 100);
  }
  else if (note_B) {
    tone(SPKR, 1976, 100);
  }
}

void playOctaveSeven() {
  int note_C = digitalRead(BUT_C);
  int note_D = digitalRead(BUT_D);
  int note_E = digitalRead(BUT_E);
  int note_F = digitalRead(BUT_F);
  int note_G = digitalRead(BUT_G);
  int note_A = digitalRead(BUT_A);
  int note_B = digitalRead(BUT_B);
  int note_AS = digitalRead(BUT_AS);
  int note_CS = digitalRead(BUT_CS); 
  int note_DS = digitalRead(BUT_DS); 
  int note_FS = digitalRead(BUT_FS); 
  int note_GS = digitalRead(BUT_GS); 
  
  if (note_C) {
    tone(SPKR, 2093, 100);  
  }
  else if (note_CS) {
    tone(SPKR, 2217, 100);
  } 
  else if (note_D) {
    tone(SPKR, 2349, 100);
  }
  else if (note_DS) {
    tone(SPKR, 2489, 100);
  } 
  else if (note_E) {
    tone(SPKR, 2637, 100);
  } 
  else if (note_F) {
    tone(SPKR, 2794, 100);
  }
  else if (note_FS) {
    tone(SPKR, 2960, 100);
  }
  else if (note_G) {
    tone(SPKR, 3136, 100);
  }
  else if (note_GS) {
    tone(SPKR, 3322, 100);
  }
  else if (note_A) {
    tone(SPKR, 3520, 100);
  }
  else if (note_AS) {
    tone(SPKR, 3729, 100);
  }
  else if (note_B) {
    tone(SPKR, 3951, 100);
  }
}
void recordOctaveOne() {
  int note_C = digitalRead(BUT_C);
  int note_D = digitalRead(BUT_D);
  int note_E = digitalRead(BUT_E);
  int note_F = digitalRead(BUT_F);
  int note_G = digitalRead(BUT_G);
  int note_A = digitalRead(BUT_A);
  int note_B = digitalRead(BUT_B);
  int note_AS = digitalRead(BUT_AS);
  int note_CS = digitalRead(BUT_CS); 
  int note_DS = digitalRead(BUT_DS); 
  int note_FS = digitalRead(BUT_FS); 
  int note_GS = digitalRead(BUT_GS); 

  if (note_C) {
    tone(SPKR, 33, 100);  
    key = 1;
  }
  else if (note_CS) {
    tone(SPKR, 34, 100);
    key = 2;
  } 
  else if (note_D) {
    tone(SPKR, 37, 100);
    key = 3;
  }
  else if (note_DS) {
    tone(SPKR, 39, 100);
    key = 4;
  } 
  else if (note_E) {
    tone(SPKR, 41, 100);
    key = 5;
  } 
  else if (note_F) {
    tone(SPKR, 44, 100);
    key = 6;
  }
  else if (note_FS) {
    tone(SPKR, 46, 100);
    key = 7;
  }
  else if (note_G) {
    tone(SPKR, 49, 100);
    key = 8;
  }
  else if (note_GS) {
    tone(SPKR, 52, 100);
    key = 9;
  }
  else if (note_A) {
    tone(SPKR, 55, 100);
    key = 10;
  }
  else if (note_AS) {
    tone(SPKR, 58, 100);
    key = 11;
  }
  else if (note_B) {
    tone(SPKR, 62, 100);
    key = 12;
  }
  
  arrRec[index] = key;
  index++;
}

void recordOctaveTwo() {
  int note_C = digitalRead(BUT_C);
  int note_D = digitalRead(BUT_D);
  int note_E = digitalRead(BUT_E);
  int note_F = digitalRead(BUT_F);
  int note_G = digitalRead(BUT_G);
  int note_A = digitalRead(BUT_A);
  int note_B = digitalRead(BUT_B);
  int note_AS = digitalRead(BUT_AS);
  int note_CS = digitalRead(BUT_CS); 
  int note_DS = digitalRead(BUT_DS); 
  int note_FS = digitalRead(BUT_FS); 
  int note_GS = digitalRead(BUT_GS); 
  
  if (note_C) {
    tone(SPKR, 65, 100);
    key = 13; 
  }
  else if (note_CS) {
    tone(SPKR, 69, 100);
    key = 14;
  } 
  else if (note_D) {
    tone(SPKR, 73, 100);
    key = 15;
  }
  else if (note_DS) {
    tone(SPKR, 78, 100);
    key = 16;
  } 
  else if (note_E) {
    tone(SPKR, 82, 100);
    key = 17;
  } 
  else if (note_F) {
    tone(SPKR, 87, 100);
    key = 18;
  }
  else if (note_FS) {
    tone(SPKR, 92, 100);
    key = 19;
  }
  else if (note_G) {
    tone(SPKR, 98, 100);
    key = 20;
  }
  else if (note_GS) {
    tone(SPKR, 104, 100);
    key = 21;
  }
  else if (note_A) {
    tone(SPKR, 110, 100);
    key = 22;
  }
  else if (note_AS) {
    tone(SPKR, 117, 100);
    key = 23;
  }
  else if (note_B) {
    tone(SPKR, 123, 100);
    key = 24; 
  }
  
  arrRec[index] = key;
  index++;
}

void recordOctaveThree() {
  int note_C = digitalRead(BUT_C);
  int note_D = digitalRead(BUT_D);
  int note_E = digitalRead(BUT_E);
  int note_F = digitalRead(BUT_F);
  int note_G = digitalRead(BUT_G);
  int note_A = digitalRead(BUT_A);
  int note_B = digitalRead(BUT_B);
  int note_AS = digitalRead(BUT_AS);
  int note_CS = digitalRead(BUT_CS); 
  int note_DS = digitalRead(BUT_DS); 
  int note_FS = digitalRead(BUT_FS); 
  int note_GS = digitalRead(BUT_GS); 

  if (note_C) {
    tone(SPKR, 131, 100); 
    key = 25; 
  }
  else if (note_CS) {
    tone(SPKR, 139, 100);
    key = 26;
  } 
  else if (note_D) {
    tone(SPKR, 147, 100);
    key = 27;
  }
  else if (note_DS) {
    tone(SPKR, 156, 100);
    key = 28;
  } 
  else if (note_E) {
    tone(SPKR, 165, 100);
    key = 29;
  } 
  else if (note_F) {
    tone(SPKR, 175, 100);
    key = 30;
  }
  else if (note_FS) {
    tone(SPKR, 185, 100);
    key = 31;
  }
  else if (note_G) {
    tone(SPKR, 196, 100);
    key = 32;
  }
  else if (note_GS) {
    tone(SPKR, 208, 100);
    key = 33;
  }
  else if (note_A) {
    tone(SPKR, 220, 100);
    key = 34;
  }
  else if (note_AS) {
    tone(SPKR, 233, 100);
    key = 35;
  }
  else if (note_B) {
    tone(SPKR, 247, 100);
    key = 36;
  }
  
  arrRec[index] = key;
  index++;
}

void recordOctaveFour() {
  int note_C = digitalRead(BUT_C);
  int note_D = digitalRead(BUT_D);
  int note_E = digitalRead(BUT_E);
  int note_F = digitalRead(BUT_F);
  int note_G = digitalRead(BUT_G);
  int note_A = digitalRead(BUT_A);
  int note_B = digitalRead(BUT_B);
  int note_AS = digitalRead(BUT_AS);
  int note_CS = digitalRead(BUT_CS); 
  int note_DS = digitalRead(BUT_DS); 
  int note_FS = digitalRead(BUT_FS); 
  int note_GS = digitalRead(BUT_GS); 

  if (note_C) {
    tone(SPKR, 261, 100);
    key = 37; 
  }
  else if (note_CS) {
    tone(SPKR, 277, 100);
    key = 38;
  } 
  else if (note_D) {
    tone(SPKR, 294, 100);
    key = 39;
  }
  else if (note_DS) {
    tone(SPKR, 311, 100);
    key = 40;
  } 
  else if (note_E) {
    tone(SPKR, 330, 100);
    key = 41;
  } 
  else if (note_F) {
    tone(SPKR, 349, 100);
    key = 42;
  }
  else if (note_FS) {
    tone(SPKR, 370, 100);
    key = 43;
  }
  else if (note_G) {
    tone(SPKR, 392, 100);
    key = 44;
  }
  else if (note_GS) {
    tone(SPKR, 415, 100);
    key = 45;
  }
  else if (note_A) {
    tone(SPKR, 440, 100);
    key = 46;
  }
  else if (note_AS) {
    tone(SPKR, 466, 100);
    key = 47;
  }
  else if (note_B) {
    tone(SPKR, 494, 100);
    key = 48;
  }
  
  arrRec[index] = key;
  index++;
}

void recordOctaveFive() {
  int note_C = digitalRead(BUT_C);
  int note_D = digitalRead(BUT_D);
  int note_E = digitalRead(BUT_E);
  int note_F = digitalRead(BUT_F);
  int note_G = digitalRead(BUT_G);
  int note_A = digitalRead(BUT_A);
  int note_B = digitalRead(BUT_B);
  int note_AS = digitalRead(BUT_AS);
  int note_CS = digitalRead(BUT_CS); 
  int note_DS = digitalRead(BUT_DS); 
  int note_FS = digitalRead(BUT_FS); 
  int note_GS = digitalRead(BUT_GS); 

  if (note_C) {
    tone(SPKR, 523, 100); 
    key = 49; 
  }
  else if (note_CS) {
    tone(SPKR, 554, 100);
    key = 50;
  } 
  else if (note_D) {
    tone(SPKR, 587, 100);
    key = 51;
  }
  else if (note_DS) {
    tone(SPKR, 622, 100);
    key = 52;
  } 
  else if (note_E) {
    tone(SPKR, 659, 100);
    key = 53;
  } 
  else if (note_F) {
    tone(SPKR, 698, 100);
    key = 54;
  }
  else if (note_FS) {
    tone(SPKR, 740, 100);
    key = 55;
  }
  else if (note_G) {
    tone(SPKR, 784, 100);
    key = 56;
  }
  else if (note_GS) {
    tone(SPKR, 831, 100);
    key = 57;
  }
  else if (note_A) {
    tone(SPKR, 880, 100);
    key = 58;
  }
  else if (note_AS) {
    tone(SPKR, 932, 100);
    key = 59;
  }
  else if (note_B) {
    tone(SPKR, 988, 100);
    key = 60;
  }
  
  arrRec[index] = key;
  index++;
}

void recordOctaveSix() {
  int note_C = digitalRead(BUT_C);
  int note_D = digitalRead(BUT_D);
  int note_E = digitalRead(BUT_E);
  int note_F = digitalRead(BUT_F);
  int note_G = digitalRead(BUT_G);
  int note_A = digitalRead(BUT_A);
  int note_B = digitalRead(BUT_B);
  int note_AS = digitalRead(BUT_AS);
  int note_CS = digitalRead(BUT_CS); 
  int note_DS = digitalRead(BUT_DS); 
  int note_FS = digitalRead(BUT_FS); 
  int note_GS = digitalRead(BUT_GS); 

  if (note_C) {
    tone(SPKR, 1047, 100);  
    key = 61;
  }
  else if (note_CS) {
    tone(SPKR, 1109, 100);
    key = 62;
  } 
  else if (note_D) {
    tone(SPKR, 1175, 100);
    key = 63;
  }
  else if (note_DS) {
    tone(SPKR, 1245, 100);
    key = 64;
  } 
  else if (note_E) {
    tone(SPKR, 1319, 100);
    key = 65;
  } 
  else if (note_F) {
    tone(SPKR, 1397, 100);
    key = 66;
  }
  else if (note_FS) {
    tone(SPKR, 1480, 100);
    key = 67;
  }
  else if (note_G) {
    tone(SPKR, 1568, 100);
    key = 68;
  }
  else if (note_GS) {
    tone(SPKR, 1661, 100);
    key = 69;
  }
  else if (note_A) {
    tone(SPKR, 1760, 100);
    key = 70;
  }
  else if (note_AS) {
    tone(SPKR, 1865, 100);
    key = 71;
  }
  else if (note_B) {
    tone(SPKR, 1976, 100);
    key = 72;
  }
  
  arrRec[index] = key;
  index++;
}

void recordOctaveSeven() {
  int note_C = digitalRead(BUT_C);
  int note_D = digitalRead(BUT_D);
  int note_E = digitalRead(BUT_E);
  int note_F = digitalRead(BUT_F);
  int note_G = digitalRead(BUT_G);
  int note_A = digitalRead(BUT_A);
  int note_B = digitalRead(BUT_B);
  int note_AS = digitalRead(BUT_AS);
  int note_CS = digitalRead(BUT_CS); 
  int note_DS = digitalRead(BUT_DS); 
  int note_FS = digitalRead(BUT_FS); 
  int note_GS = digitalRead(BUT_GS); 

  if (note_C) {
    tone(SPKR, 2093, 100);
    key = 73;  
  }
  else if (note_CS) {
    tone(SPKR, 2217, 100);
    key = 74;
  } 
  else if (note_D) {
    tone(SPKR, 2349, 100);
    key = 75;
  }
  else if (note_DS) {
    tone(SPKR, 2489, 100);
    key = 76;
  } 
  else if (note_E) {
    tone(SPKR, 2637, 100);
    key = 77;
  } 
  else if (note_F) {
    tone(SPKR, 2794, 100);
    key = 78;
  }
  else if (note_FS) {
    tone(SPKR, 2960, 100);
    key = 79;
  }
  else if (note_G) {
    tone(SPKR, 3136, 100);
    key = 80;
  }
  else if (note_GS) {
    tone(SPKR, 3322, 100);
    key = 81;
  }
  else if (note_A) {
    tone(SPKR, 3520, 100);
    key = 82;
  }
  else if (note_AS) {
    tone(SPKR, 3729, 100);
    key = 83;
  }
  else if (note_B) {
    tone(SPKR, 3951, 100);
    key = 84;
  }
  
  arrRec[index] = key;
  index++;
}

void loop() {
  // Main Program
  int octave_cycler = analogRead(POT_octave);
  int record = digitalRead(SW_rcrd);
  int play = digitalRead(SW_play);
  int playB = digitalRead(BUT_play);

if (play == 1) {
    lcd.setCursor(0, 0);
    lcd.print("Playing back...");

    for(int i = 0; i < 10; i++)
    {
      if (playB) {
        if (octave_cycler > 0 && octave_cycler <= 145) {
          lcd.clear();
          lcd.setCursor(4, 1);
          lcd.print("Octave 1");
          
          recordOctaveOne();
              if(arrRec[i] = 1)
              {
                tone(SPKR, 33, 100);
                delay(55);    
              }
              else if(arrRec[i] = 2)
              {
                tone(SPKR, 34, 100);
                delay(55);  
              }
              else if(arrRec[i] = 3)
              {
                tone(SPKR, 37, 100);
                delay(55);  
              }
              else if(arrRec[i] = 4)
              {
                tone(SPKR, 39, 100);
                delay(55);  
              }
              else if(arrRec[i] = 5)
              {
                tone(SPKR, 41, 100);
                delay(55);  
              }
              else if(arrRec[i] = 6)
              {
                tone(SPKR, 44, 100);
                delay(55);  
              }
              else if(arrRec[i] = 7)
              {
                tone(SPKR, 46, 100);
                delay(55);  
              }
              else if(arrRec[i] = 8)
              {
                tone(SPKR, 49, 100);
                delay(55);  
              }
              else if(arrRec[i] = 9)
              {
                tone(SPKR, 52, 100);
                delay(55);  
              }
              else if(arrRec[i] = 10)
              {
                tone(SPKR, 55, 100);
                delay(55);  
              }
              else if(arrRec[i] = 11)
              {
                tone(SPKR, 58, 100);
                delay(55);  
              }
              else if(arrRec[i] = 12)
              {
                tone(SPKR, 62, 100);
                delay(55);  
              }
        }
  
        else if (octave_cycler > 145 && octave_cycler <= 292) {
          lcd.clear();
          lcd.setCursor(4, 1);
          lcd.print("Octave 2");
          
          recordOctaveTwo();
              if(arrRec[i] = 13)
              {
                tone(SPKR, 65, 100);
                delay(55);  
              }
              else if(arrRec[i] = 14)
              {
                tone(SPKR, 69, 100);
                delay(55);  
              }
              else if(arrRec[i] = 15)
              {
                tone(SPKR, 73, 100);
                delay(55);  
              }
              else if(arrRec[i] = 16)
              {
                tone(SPKR, 78, 100);
                delay(55);  
              }
              else if(arrRec[i] = 17)
              {
                tone(SPKR, 82, 100);
                delay(55);  
              }
              else if(arrRec[i] = 18)
              {
                tone(SPKR, 87, 100);
                delay(55);  
              }
              else if(arrRec[i] = 19)
              {
                tone(SPKR, 92, 100);
                delay(55);  
              }
              else if(arrRec[i] = 20)
              {
                tone(SPKR, 98, 100);
                delay(55);  
              }
              else if(arrRec[i] = 21)
              {
                tone(SPKR, 104, 100);
                delay(55);  
              }
              else if(arrRec[i] = 22)
              {
                tone(SPKR, 110, 100);
                delay(55);  
              }
              else if(arrRec[i] = 23)
              {
                tone(SPKR, 117, 100);
                delay(55);  
              }
              else if(arrRec[i] = 24)
              {
                tone(SPKR, 123, 100);
                delay(55);  
              }
        }
        
        else if (octave_cycler > 292 && octave_cycler <= 438) {
          lcd.clear();
          lcd.setCursor(4, 1);
          lcd.print("Octave 3");
          
          recordOctaveThree();
              if(arrRec[i] = 25)
              {
                tone(SPKR, 131, 100);
                delay(55);  
              }
              else if(arrRec[i] = 26)
              {
                tone(SPKR, 139, 100);
                delay(55);  
              }
              else if(arrRec[i] = 27)
              {
                tone(SPKR, 147, 100);
                delay(55);  
              }
              else if(arrRec[i] = 28)
              {
                tone(SPKR, 156, 100);
                delay(55);  
              }
              else if(arrRec[i] = 29)
              {
                tone(SPKR, 165, 100);
                delay(55);  
              }
              else if(arrRec[i] = 30)
              {
                tone(SPKR, 175, 100);
                delay(55);  
              }
              else if(arrRec[i] = 31)
              {
                tone(SPKR, 185, 100);
                delay(55);  
              }
              else if(arrRec[i] = 32)
              {
                tone(SPKR, 196, 100);
                delay(55);  
              }
              else if(arrRec[i] = 33)
              {
                tone(SPKR, 208, 100);
                delay(55);  
              }
              else if(arrRec[i] = 34)
              {
                tone(SPKR, 220, 100);
                delay(55);  
              }
              else if(arrRec[i] = 35)
              {
                tone(SPKR, 233, 100);
                delay(55);  
              }
              else if(arrRec[i] = 36)
              {
                tone(SPKR, 247, 100);
                delay(55);  
              }
        }
        
        else if (octave_cycler > 438 && octave_cycler <= 584) {
          lcd.clear();
          lcd.setCursor(4, 1);
          lcd.print("Octave 4");
          
          recordOctaveFour();
              if(arrRec[i] = 37)f
              {
                tone(SPKR, 261, 100);
                delay(55);  
              }
              else if(arrRec[i] = 38)
              {
                tone(SPKR, 277, 100);
                delay(55);  
              }
              else if(arrRec[i] = 39)
              {
                tone(SPKR, 294, 100);
                delay(55);  
              }
              else if(arrRec[i] = 40)
              {
                tone(SPKR, 311, 100);
                delay(55);  
              }
              else if(arrRec[i] = 41)
              {
                tone(SPKR, 330, 100);
                delay(55);  
              }
              else if(arrRec[i] = 42)
              {
                tone(SPKR, 349, 100);
                delay(55);  
              }
              else if(arrRec[i] = 43)
              {
                tone(SPKR, 370, 100);
                delay(55);  
              }
              else if(arrRec[i] = 44)
              {
                tone(SPKR, 392, 100);
                delay(55);  
              }
              else if(arrRec[i] = 45)
              {
                tone(SPKR, 415, 100);
                delay(55);  
              }
              else if(arrRec[i] = 46)
              {
                tone(SPKR, 440, 100);
                delay(55);  
              }
              else if(arrRec[i] = 47)
              {
                tone(SPKR, 466, 100);
                delay(55);  
              }
              else if(arrRec[i] = 48)
              {
                tone(SPKR, 494, 100);
                delay(55);  
              }
        }
      
        else if (octave_cycler > 584 && octave_cycler <= 730) {
          lcd.clear();
          lcd.setCursor(4, 1);
          lcd.print("Octave 5");
          
          recordOctaveFive();
              if(arrRec[i] = 49)
              {
                tone(SPKR, 523, 100);
                delay(55);  
              }
              else if(arrRec[i] = 50)
              {
                tone(SPKR, 554, 100);
                delay(55);  
              }
              else if(arrRec[i] = 51)
              {
                tone(SPKR, 587, 100);
                delay(55);  
              }
              else if(arrRec[i] = 52)
              {
                tone(SPKR, 622, 100);
                delay(55);  
              }
              else if(arrRec[i] = 53)
              {
                tone(SPKR, 659, 100);
                delay(55);  
              }
              else if(arrRec[i] = 54)
              {
                tone(SPKR, 698, 100);
                delay(55);  
              }
              else if(arrRec[i] = 55)
              {
                tone(SPKR, 740, 100);
                delay(55);  
              }
              else if(arrRec[i] = 56)
              {
                tone(SPKR, 784, 100);
                delay(55);  
              }
              else if(arrRec[i] = 57)
              {
                tone(SPKR, 831, 100);
                delay(55);  
              }
              else if(arrRec[i] = 58)
              {
                tone(SPKR, 880, 100);
                delay(55);  
              }
              else if(arrRec[i] = 59)
              {
                tone(SPKR, 932, 100);
                delay(55);  
              }
              else if(arrRec[i] = 60)
              {
                tone(SPKR, 988, 100);
                delay(55);  
              }
        }
      
        else if (octave_cycler > 730 && octave_cycler <= 877) {
          lcd.clear();
          lcd.setCursor(4, 1);
          lcd.print("Octave 6");
          
          recordOctaveSix();
              if(arrRec[i] = 61)
              {
                tone(SPKR, 1047, 100);
                delay(55);  
              }
              else if(arrRec[i] = 62)
              {
                tone(SPKR, 1109, 100);
                delay(55);  
              }
              else if(arrRec[i] = 63)
              {
                tone(SPKR, 1175, 100);
                delay(55);  
              }
              else if(arrRec[i] = 64)
              {
                tone(SPKR, 1245, 100);
                delay(55);  
              }
              else if(arrRec[i] = 65)
              {
                tone(SPKR, 1319, 100);
                delay(55);  
              }
              else if(arrRec[i] = 66)
              {
                tone(SPKR, 1397, 100);
                delay(55);  
              }
              else if(arrRec[i] = 67)
              {
                tone(SPKR, 1480, 100);
                delay(55);  
              }
              else if(arrRec[i] = 68)
              {
                tone(SPKR, 1568, 100);
                delay(55);  
              }
              else if(arrRec[i] = 69)
              {
                tone(SPKR, 1661, 100);
                delay(55);                                                                                                 
              }
              else if(arrRec[i] = 70)
              {
                tone(SPKR, 1760, 100);
                delay(55);  
              }
              else if(arrRec[i] = 71)
              {
                tone(SPKR, 1865, 100);
                delay(55);  
              }
              else if(arrRec[i] = 72)
              {
                tone(SPKR, 1976, 100);
                delay(55);  
              }
        }

        else if (octave_cycler > 877 && octave_cycler < 1024) {
          lcd.clear();
          lcd.setCursor(4, 1);
          lcd.print("Octave 7");
          
          recordOctaveSeven();
              if(arrRec[i] = 73)
              {
                tone(SPKR, 2093, 100);
                delay(55);  
              }
              else if(arrRec[i] = 74)
              {
                tone(SPKR, 2217, 100);
                delay(55);  
              }
              else if(arrRec[i] = 75)
              {
                tone(SPKR, 2349, 100);
                delay(55);  
              }
              else if(arrRec[i] = 76)
              {
                tone(SPKR, 2489, 100);
                delay(55);  
              }
              else if(arrRec[i] = 77)
              {
                tone(SPKR, 2637, 100);
                delay(55);  
              }
              else if(arrRec[i] = 78)
              {
                tone(SPKR, 2794, 100);
                delay(55);  
              }
              else if(arrRec[i] = 79)
              {
                tone(SPKR, 2960, 100);
                delay(55);  
              }
              else if(arrRec[i] = 80)
              {
                tone(SPKR, 3136, 100);
                delay(55);  
              }
              else if(arrRec[i] = 81)
              {
                tone(SPKR, 3322, 100);
                delay(55);  
              }
              else if(arrRec[i] = 82)
              {
                tone(SPKR, 3520, 100);
                delay(55);  
              }
              else if(arrRec[i] = 83)
              {
                tone(SPKR, 3729, 100); 
                delay(55); 
              }
              else if(arrRec[i] = 84)
              {
                tone(SPKR, 3951, 100);
                delay(55);  
              }
        }
  
        else {
        lcd.clear();
        lcd.setCursor(7, 1);
        lcd.print("OFF");
          }
   
        delay(55);
          
      }
    }
  }
  else if (play == 0) {
        if (octave_cycler > 0 && octave_cycler <= 145) {
          lcd.clear();
          lcd.setCursor(4, 1);
          lcd.print("Octave 1");
          
          playOctaveOne();
        }
        
        else if (octave_cycler > 145 && octave_cycler <= 292) {
          lcd.clear();
          lcd.setCursor(4, 1);
          lcd.print("Octave 2");
          
          playOctaveTwo();
        }
        
        else if (octave_cycler > 292 && octave_cycler <= 438) {
          lcd.clear();
          lcd.setCursor(4, 1);
          lcd.print("Octave 3");
          
          playOctaveThree();
        }
        
        else if (octave_cycler > 438 && octave_cycler <= 584) {
          lcd.clear();
          lcd.setCursor(4, 1);
          lcd.print("Octave 4");
          
          playOctaveFour();
        }
      
        else if (octave_cycler > 584 && octave_cycler <= 730) {
          lcd.clear();
          lcd.setCursor(4, 1);
          lcd.print("Octave 5");
          
          playOctaveFive();
        }
      
        else if (octave_cycler > 730 && octave_cycler <= 877) {
          lcd.clear();
          lcd.setCursor(4, 1);
          lcd.print("Octave 6");
          
          playOctaveSix();
        }
      
        else if (octave_cycler > 877 && octave_cycler < 1024) {
          lcd.clear();
          lcd.setCursor(4, 1);
          lcd.print("Octave 7");
          
          playOctaveSeven();
        }
  }
  else {
    lcd.clear();
    lcd.setCursor(7, 1);
    lcd.print("OFF");
  }
   
  delay(55);
}


/**
 * Changelog:
 * --
 * Pre-release 1.0 (6/22/2021):
 * - Added functionality for speaker to play C4 and D4 
 *   between two push-buttons.
 * 
 * Pre-release 1.1 (6/25/2021):
 * - Added push-buttons for all seven notes.
 * - Added functions to play in octaves 3, 4, and 5.
 * - Incorporated potentiometer to dial between octaves.
 * 
 * Pre-release 1.2 (6/27/2021):
 * - Added functions to play in octaves 1 to 7.
 * - Added LCD to display current octave to user.
 * - Moved around pins to accomodate LCD wiring.
 * 
 * --
 * Planned:
 * - Add a record/playback feature.
 * - Add sharp notes.
 * - Develop PCB.
 */
 
