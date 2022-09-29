#include <sevenseg.h>



void sevenseg::beging() {
  for (int i ; i <= p8 ; i++) {
    pinMode(i , OUTPUT);
  }
}

void sevenseg::clear() {
  digitalWrite(p1 , 0);
  digitalWrite(p2 , 0);
  digitalWrite(p3 , 0);
  digitalWrite(p4 , 0);
  digitalWrite(p5 , 0);
  digitalWrite(p6 , 0);
  digitalWrite(p7 , 0);
  digitalWrite(p8 , 0);
}

void sevenseg::displaynumcath(byte number) {
  switch (number) {
    case (0):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], zero[i]);
        break;
      }

    case (1):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], one[i]);
        break;
      }

    case (2):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], two[i]);
        break;
      }

    case (3):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], three[i]);
        break;
      }

    case (4):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], four[i]);
        break;
      }

    case (5):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], five[i]);
        break;
      }

    case (6):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], six[i]);
        break;
      }

    case (7):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], seven[i]);
        break;
      }

    case (8):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], eight[i]);
        break;
      }

    case (9):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], nine[i]);
        break;
      }

    default:
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], zero[i]);
        break;
      }
  }
}

void sevenseg::displaynumanode(short int number) {
 short zero[8] = {0, 0, 0, 0, 0, 0, 1, 1};
 short one[8] = {1, 0, 0, 1, 1, 1, 1, 1};
 short two[8] = {0, 0, 1, 0, 0, 1, 0, 1};
 short three[8] = {0, 0, 0, 0, 1, 1, 0, 1};
 short four[8] = {1, 0, 0, 1, 1, 0, 0, 1};
 short five[8] = {0, 1, 0, 0, 1, 0, 0, 1};
 short six[8] = {0, 1, 0, 0, 0, 0, 0, 1};
 short seven[8] = {0, 0, 0, 1, 1, 1, 1, 1};
 short eight[8] = {0, 0, 0, 0, 0, 0, 0, 1};
 short nine[8] = {0, 0, 0, 0, 1, 0, 0, 1};
  switch (number) {
    case (0):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], zero[i]);
        break;
      }

    case (1):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], one[i]);
        break;
      }

    case (2):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], two[i]);
        break;
      }

    case (3):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], three[i]);
        break;
      }

    case (4):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], four[i]);
        break;
      }

    case (5):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], five[i]);
        break;
      }

    case (6):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], six[i]);
        break;
      }

    case (7):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], seven[i]);
        break;
      }

    case (8):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], eight[i]);
        break;
      }

    case (9):
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], nine[i]);
        break;
      }

    default:
      for (int i = 0; i <= 8; i++) {
        digitalWrite(pins[i], zero[i]);
        break;
      }
  }
}

void sevenseg::flashing(unsigned int flashingnumber){
    for(int i = 0 ; i <= flashingnumber ; i++){
        
    }
}

sevenseg::sevenseg(byte pin1 , byte pin2 , byte pin3 , byte pin4 , byte pin5 , byte pin6 , byte pin7 , byte pin8) {
  pin1 = p1;
  pin2 = p2;
  pin3 = p3;
  pin4 = p4;
  pin5 = p5;
  pin6 = p6;
  pin7 = p7;
  pin8 = p8;

}
