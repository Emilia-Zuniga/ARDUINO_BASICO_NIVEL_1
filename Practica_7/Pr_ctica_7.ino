
//Definir segmentos y sus pines
const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;
const int G = 8;

//Declarar cantidad de segmentos
const int n = 7;
//Areglo para acceder a los segmentos
const int segmentos [n] = {A,B,C,D,E,F,G};

//Definir arreglo con los valores
const int digitos [10][n] = {
  //{A,B,C,D,E,F,G}
  {1,1,1,1,1,1,0}, //0
  {0,1,1,0,0,0,0}, //1
  {1,1,0,1,1,0,1}, //2
  {1,1,1,1,0,0,1}, //3
  {0,1,1,0,0,1,1}, //4
  {1,0,1,1,0,1,1}, //5
  {1,0,1,1,1,1,1}, //6
  {1,1,1,0,0,0,0}, //7
  {1,1,1,1,1,1,1}, //8
  {1,1,1,1,0,1,1}  //9
};
//Valor de LOW para catodo comun
const int OFF = LOW;

void setup(){
  //Usando ciclo for para definir salidas
  for (int i=0; i<n; i++){
    pinMode(segmentos[i], OUTPUT);
    //Apagar las salidas al iniciar
    digitalWrite(segmentos[i], OFF);
  }
}

//Crear funcion para mostrar digito
void mostrar_digitos (int d){
  for (int i = 0; i < n; i++){
    digitalWrite(segmentos[i], digitos[d][i]);
  }
}

void loop(){
  //Ciclo for para mostrar los digitos
  for(int i=0; i<10; i++){
    mostrar_digitos(i); //Usar funcion
    delay(1000);        //Tiempo de espera
  }
}
