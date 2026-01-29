int ledPin=8; //Pin digital que controlara el Led. Pin es la terminal o agujero en este caso de la placa

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT); //Indico que el pin 8 sera usado en modo OUTPUT, es decir salida, la placa escupira algo por allíí
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin,HIGH); //Le digo que pase 5V por el pin 8, esto con HIGH
  delay(1000); //Le indico que pause por 1000 milisegundos = 1 segundo
  digitalWrite(ledPin,LOW); //Le digo que pase 0V por el pin 8, esto con LOW
  delay(1000); //Le indico que pause por 1000 milisegundos = 1 
}
