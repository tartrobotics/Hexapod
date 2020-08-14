/*
  Hexpod Walking Robot

    The idea:
    In this tutorail, we will show you how to build a robotic hexapod, a six-legged robot,
    that can walk similar to an insect. You will make the body and the leg mechanisms of the
    robot using Lego Technic parts. Then, commercially available DC gear motors will be
    connected to the leg mechanism to move the legs.

    The circuit:
    - In this circuit, an Arduino nano is used. Any other types of Arduino
    can be used. Do not forget to change the pin configurations
    if you want to change the Arduino on your preference.


    Visit Tart Robotics blog for more information:
    https://www.tartrobotics.com/blog
*/

#define M1 11
#define M12 10
#define M2 9
#define M22 5 


void setup() {
  // Initialize Arduino pins to outputs
  pinMode(M1, OUTPUT);
  pinMode(M12, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(M22, OUTPUT);
}

void loop() {
  goForward();
  delay(3000);

  goBackward();
  delay(3000);

  turnLeft();
  delay(3000);

  turnRight();
  delay(3000);
}

// Configures driver motor pins to go forward.
void goForward() {
  digitalWrite(M1, LOW);
  analogWrite(M12, 200);
  analogWrite(M2, 200);
  digitalWrite(M22, LOW);
}

// Configures driver motor pins to go backward.
void goBackward() {
  digitalWrite(M12, LOW);
  analogWrite(M1, 200);
  analogWrite(M22, 200);
  digitalWrite(M2, LOW);
}

// Configures driver motor pins to turn left.
void turnLeft() {
  digitalWrite(M12, LOW);
  analogWrite(M1, 200);
  analogWrite(M2, 200);
  digitalWrite(M22, LOW);
}

// Configures driver motor pins to turn right.
void turnRight() {
  digitalWrite(M1, LOW);
  analogWrite(M12, 200);
  analogWrite(M22, 200);
  digitalWrite(M2, LOW);
}
