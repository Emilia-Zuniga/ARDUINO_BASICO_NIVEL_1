
//Pin analogico
int sensorLM35 = A1;

//Guarda el valor
float temperatura;

void setup(){
  //Establecer conexion  
  Serial.begin(9600);
  //Definir sensor como entrada
  pinMode(sensorLM35, INPUT);
}

void loop(){
  //Calculo para la temperatura en grados
  temperatura = ((analogRead(sensorLM35)*(5.0/1024))-0.5)/0.01;
  Serial.println(temperatura); //Imprimir la temperatura
  delay(200);                  //Tiempo de espera
}
