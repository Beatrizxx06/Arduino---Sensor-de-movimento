const int echo = 13;
const int trig = 12;

int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;

int buzzer = 6;

int duration = 0;
int distance = 0;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(buzzer, LOW);

  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);

  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  distance = (duration * 0.0343) / 2;

  if (distance < 10) {
    digitalWrite(LED1, HIGH);
    digitalWrite(buzzer, HIGH);  
  }
  else if (distance >= 10 && distance <= 20) {
    digitalWrite(LED2, HIGH);
  }
  else if (distance > 20 && distance < 30) {
    digitalWrite(LED3, HIGH);
  }
  else {
    digitalWrite(LED4, HIGH);
  }

  Serial.println(distance);
  delay(200);
}
