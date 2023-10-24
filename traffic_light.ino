// Project : Illustration of basic traffic signal

// Components used:
// Arduino Mega,Breadboard, 3 Resistors and 3 LEDs (Red, Yellow and Red)


int red_ledPIN = 2;
int green_ledPIN = 3;
int yellow_ledPIN = 4;


void setup() {
  // put your setup code here, to run once:
  pinMode(red_ledPIN, OUTPUT);
  pinMode(yellow_ledPIN, OUTPUT);
  pinMode(green_ledPIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red_ledPIN,HIGH); // Turn on Red Light(Pin 2 - High)
  delay(3000);                    // Wait for 3 sec
  digitalWrite(red_ledPIN,LOW);   // turn off light

  digitalWrite(green_ledPIN,HIGH); // Turn on Green Light(Pin 3 - High)
  delay(9000);                      // Wait for 9 sec
  digitalWrite(green_ledPIN,LOW);   // turn off light 
                    
  digitalWrite(yellow_ledPIN,HIGH); // Turn on Yellow Light(Pin 4 - High)
  delay(2000);                       // Wait for 2 sec
  digitalWrite(yellow_ledPIN,LOW);  // turn off light
                        
}
