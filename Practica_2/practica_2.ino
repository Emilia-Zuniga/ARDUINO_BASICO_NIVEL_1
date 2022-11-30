
int verde = 3; //Definir una variable y PIN para el led
int boton = 8; //Definir pin del Boton Pulsador
int estado; //Definir estado del led encendido/apagado

void setup() {
  Serial.begin(9600); //Iniciar puerto serie
  //Definir el boton como entrada
  pinMode(boton, INPUT);
  //Definir led como salida
  pinMode(verde, OUTPUT);
}

//Proceso de encendido y apagado
void loop() {
  // Condicional para pulsador y led apagado (0)
  if(digitalRead(boton) && estado == 0){ 
    digitalWrite(verde, HIGH);  //Led encendido
    delay(100); //Tiempo de espera                         
    estado = 1; //Se guarda el estado del led encendido (1) 
  } 

  //Condicional para pulsador y led encendido (1) 
  if(digitalRead(boton) && estado == 1){  
    digitalWrite(verde, LOW); //Led apagado 
    delay(100); //Tiempo de espera
    estado = 0; //Se guarda el estado del led apagado (0)   
  }  
}
