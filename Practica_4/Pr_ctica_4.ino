
//Declarar variable y pin
int rojo = 4;
int verde = 3;
int azul = 2;

void setup() {
  //Definir salidas
  pinMode(rojo,OUTPUT);
  pinMode(verde,OUTPUT);
  pinMode(azul,OUTPUT);
}

void loop() {
  //Usando comobinaciones
  //Encender color rojo
  digitalWrite(rojo, 255);
  digitalWrite(verde, 0);
  digitalWrite(azul, 0);
  delay(1000); //Tiempo de espera
  
  //Encender color azul
  digitalWrite(rojo, 0);
  digitalWrite(verde, 255);
  digitalWrite(azul, 0);
  delay(1000); //Tiempo de espera
  
  //Encender color verde
  digitalWrite(rojo, 0);
  digitalWrite(verde, 0);
  digitalWrite(azul, 255);
  delay(1000); //Tiempo de espera
}
