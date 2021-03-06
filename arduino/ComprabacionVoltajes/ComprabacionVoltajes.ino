//Voltajes por Boton
int l1Min = 400, l1Max = 510;
int l2Min = 300, l2Max = 340;
int l3Min = 220, l3Max = 260;
int l4Min = 135, l4Max = 145;
int l5Min = 163, l5Max = 175;
int l6Min = 180, l6Max = 205;
int l7Min = 119, l7Max = 126;
int l8Min = 108, l8Max = 112;
int l9Min =  99, l9Max = 105;
int   Min =  99,   Max = 510;

//Declaración de Variables
int primeraVez = 0, turno = 0, entro = 0;

//Declaración de Arreglos
int arrayJuego[9];

//Otras declaraciones
int on = 300;
int off = 100;
long cntTiempo = 0;

void setup() {
  Serial.begin(9600);
  for (int i = 2; i <= 12; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  if (analogRead(A0) > 0) {
    Serial.println(analogRead(A0));
    enciendeLedPj1(A0);
    //delay(200);
  }
}

void enciendeLedPj1(int led) {
  entro = 0;
  if (analogRead(led) >= Min && analogRead(led) <= Max) {
    if (analogRead(led) >= l1Min && analogRead(led) <= l1Max) {
      if (arrayJuego[0] == 0) {
        digitalWrite(2, HIGH);                                    //led 1
        arrayJuego[0] = 1;
        entro = 1;
      }
    }
    if (analogRead(led) >= l2Min && analogRead(led) <= l2Max) {
      if (arrayJuego[1] == 0) {
        digitalWrite(3, HIGH);                                    //led 2
        arrayJuego[1] = 1;
        entro = 1;
      }
    }
    if (analogRead(led) >= l3Min && analogRead(led) <= l3Max) {
      if (arrayJuego[2] == 0) {
        digitalWrite(4, HIGH);                                    //led 3
        arrayJuego[2] = 1;
        entro = 1;
      }
    }
    if (analogRead(led) >= l4Min && analogRead(led) <= l4Max) {
      if (arrayJuego[3] == 0) {
        digitalWrite(5, HIGH);                                    //led 4
        arrayJuego[3] = 1;
        entro = 1;
      }
    }
    if (analogRead(led) >= l5Min && analogRead(led) <= l5Max) {
      if (arrayJuego[4] == 0) {
        digitalWrite(6, HIGH);                                    //led 5
        arrayJuego[4] = 1;
        entro = 1;
      }
    }
    if (analogRead(led) >= l6Min && analogRead(led) <= l6Max) {
      if (arrayJuego[5] == 0) {
        digitalWrite(7, HIGH);                                    //led 6
        arrayJuego[5] = 1;
        entro = 1;
      }
    }
    if (analogRead(led) >= l7Min && analogRead(led) <= l7Max) {
      if (arrayJuego[6] == 0) {
        digitalWrite(8, HIGH);                                    //led 7
        arrayJuego[6] = 1;
        entro = 1;
      }
    }
    if (analogRead(led) >= l8Min && analogRead(led) <= l8Max) {
      if (arrayJuego[7] == 0) {
        digitalWrite(9, HIGH);                                    //led 8
        arrayJuego[7] = 1;
        entro = 1;
      }
    }
    if (analogRead(led) >= l9Min && analogRead(led) <= l9Max) {
      if (arrayJuego[8] == 0) {
        digitalWrite(10, HIGH);                                   //led 9
        arrayJuego[8] = 1;
        entro = 1;
      }
    }
    if (entro == 1) {
      // Serial.println("No Entro");
    }
    delay(500);
  } else {
    //Serial.println("No Entro Pj1");
    //delay(50);
  }
}

