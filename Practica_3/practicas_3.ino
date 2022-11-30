
//Definir una variable y PIN para cada led
int verde = 3;
int amarillo = 4;
int rojo = 5;

void setup() {
  Serial.begin(9600);    //Iniciar puerto serie
  //Definir pin como salida
  pinMode(verde, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(rojo, OUTPUT);
}

//Proceso de encendido y apagado 
void loop(){
  //Led verde pin 3
  digitalWrite(verde, HIGH);  // Encender Led
  delay(500);                 // Tiempo encendido
  digitalWrite(verde, LOW);   // Apagar Led
  delay(1000);                // Esperar un segundo
  
  //Led amarillo pin 4
  digitalWrite(amarillo, HIGH);  // Encender Led
  delay(1000);                   // Tiempo encendido
  digitalWrite(amarillo, LOW);   // Apagar Led
  delay(1000);                   // Esperar un segundo

  //Led rojo pin 5
  digitalWrite(rojo, HIGH);  // Encender Led
  delay(1100);               // Tiempo encendido
  digitalWrite(rojo, LOW);   // Apagar Led
  delay(1000);               // Esperar un segundo
}
