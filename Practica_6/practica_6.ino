
//Declarar variables y pines
int TRIG = 10;    // Trigger Pin 10
int ECHO = 9;     // Echo Pin 9

//Variables de duracion y tiempo
int duracion;
int distancia;

void setup(){
  Serial.begin(9600);     //Inicializar la comunicacion
  pinMode(TRIG, OUTPUT);  //Definir trigger como salida
  pinMode(ECHO, INPUT);   //Definir echo como entrada  
}

void loop(){  
  //Genera el pulso que se envia
  digitalWrite(TRIG, HIGH); //Pulso alto
  delay(1);                 //Tiempo de espera
  digitalWrite(TRIG, LOW);  //Pulso bajo
  
  //Devuelve un tie mpo en microsegundos
  duracion = pulseIn(ECHO, HIGH);  
  distancia = duracion / 58.2; //Calculo de distancia en cm   
  Serial.print(distancia);     //Imprimir distancia
  Serial.println(" cm");       //Imprimir unidad
  delay(200);                  //Tiempo de espera
}
