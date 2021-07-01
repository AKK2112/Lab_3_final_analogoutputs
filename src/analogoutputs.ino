SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

int red = D5;
int green = D6;
int blue = D7;

// setup() runs once, when the device is first turned on.
void setup() {
  
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
  
}

void loop() {
//turn blue on
  analogWrite(D7, 255);
  delay(1000);
  analogWrite(D7, 0);
  delay(0);

//turn green on 
  analogWrite(D6, 255);
  delay(1000);
  analogWrite(D6, 0);
  delay(0);

//turn red on 
  analogWrite(D5, 255);
  delay(1000);
  analogWrite(D5, 0);
  delay(0);

//turn orange on
  analogWrite(D5, 128);
  analogWrite(D6, 5);
  delay(1000);
  analogWrite(D5, 0);
  analogWrite(D6, 0);
  delay(0);

//turn yellow on
  analogWrite(D5, 255);
  analogWrite(D6, 255);
  delay(1000);
  analogWrite(D5, 0);
  analogWrite(D6, 0);
  delay(0);

//turn purple on
  analogWrite(D5, 255);
  analogWrite(D7, 255);
  delay(1000);
  analogWrite(D5, 0);
  analogWrite(D7, 0);
  delay(0);

//turn cyan on
  analogWrite(D5, 0);
  analogWrite(D6, 255);
  analogWrite(D7, 255);
  delay(1000);
  analogWrite(D5, 0);
  analogWrite(D6, 0);
  analogWrite(D7, 0);
  delay(500);



}