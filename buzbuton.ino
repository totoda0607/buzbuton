const int BUZZER = 11;
const int button[] = {2, 3, 4, 5, 6, 7, 8, 9,10,};
const int buttonNotes[] = {329,392, 440, 494, 523, 587, 650, 698, 783};

void setup() {
  for (int n = 0; n < 8; n++) {
    pinMode(button[n], INPUT);
  }
}

void loop() {
  if (digitalRead(button[0]) == HIGH) {
    tone(BUZZER, buttonNotes[0]);
  } else if (digitalRead(button[1]) == HIGH) {
    tone(BUZZER, buttonNotes[1]);
  } else if (digitalRead(button[2]) == HIGH) {
    tone(BUZZER, buttonNotes[2]);
  } else if (digitalRead(button[3]) == HIGH) {
    tone(BUZZER, buttonNotes[3]);
  } else if (digitalRead(button[4]) == HIGH) {
    tone(BUZZER, buttonNotes[4]);
  } else if (digitalRead(button[5]) == HIGH) {
    tone(BUZZER, buttonNotes[5]);
  } else if (digitalRead(button[6]) == HIGH) {
    tone(BUZZER, buttonNotes[6]);
  } else if (digitalRead(button[7]) == HIGH) { 
    tone(BUZZER, buttonNotes[7]);
  }else if (digitalRead(button[8]) == HIGH) { 
    tone(BUZZER, buttonNotes[8]);
  }else {
    noTone(BUZZER);
  }
}

