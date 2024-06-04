// Definição dos pinos dos LEDs
const int ledVerde1 = 5;
const int ledVerde2 = 25;
const int ledAmarelo1 = 4;
const int ledAmarelo2 = 22;
const int ledVermelho1 = 2;
const int ledVermelho2 = 33;
int tempoA = 2000;
int tempoV = 5000;

void luzVe() {
digitalWrite(ledVerde1, HIGH);
  digitalWrite(ledVerde2, LOW);
  digitalWrite(ledAmarelo1, LOW);
  digitalWrite(ledAmarelo2, LOW);
  digitalWrite(ledVermelho1, LOW);
  digitalWrite(ledVermelho2, HIGH);
  delay(tempoV);
}

void luzA() {
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledVerde2, LOW);
  digitalWrite(ledAmarelo1, HIGH);
  digitalWrite(ledAmarelo2, LOW);
  digitalWrite(ledVermelho1, LOW);
  digitalWrite(ledVermelho2, HIGH);
  delay(tempoA);
}

void luzVr() {
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledVerde2, HIGH);
  digitalWrite(ledAmarelo1, LOW);
  digitalWrite(ledAmarelo2, LOW);
  digitalWrite(ledVermelho1, HIGH);
  digitalWrite(ledVermelho2, LOW);
  delay(tempoV);
}

void luzAm(){
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledVerde2, LOW);
  digitalWrite(ledAmarelo1, LOW);
  digitalWrite(ledAmarelo2, HIGH);
  digitalWrite(ledVermelho1, HIGH);
  digitalWrite(ledVermelho2, LOW);
  delay(tempoA);
}

void setup() {
  // Configuração dos pinos como saída
  pinMode(ledVerde1, OUTPUT);
  pinMode(ledVerde2, OUTPUT);
  pinMode(ledAmarelo1, OUTPUT);
  pinMode(ledAmarelo2, OUTPUT);
  pinMode(ledVermelho1, OUTPUT);
  pinMode(ledVermelho2, OUTPUT);
}

void loop() {
  luzVe();
  luzA();
  luzVr();
  luzAm();
}