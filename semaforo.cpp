int rojo = 8;
int amarillo = 9;
int verde = 10;

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {

  digitalWrite(verde, HIGH);
  digitalWrite(amarillo, LOW);
  digitalWrite(rojo, LOW);
  delay(3000); // 3 segundos

  
  digitalWrite(verde, LOW);

  
  
  digitalWrite(amarillo, HIGH);
  delay(166);
  digitalWrite(amarillo, LOW);
  delay(166);
  
  
  digitalWrite(amarillo, HIGH);
  delay(166);
  digitalWrite(amarillo, LOW);
  delay(166);
  
  
  digitalWrite(amarillo, HIGH);
  delay(166);
  digitalWrite(amarillo, LOW);
  delay(170); 

  
  digitalWrite(rojo, HIGH);
  
  digitalWrite(amarillo, LOW); 
  delay(4000); 
} 