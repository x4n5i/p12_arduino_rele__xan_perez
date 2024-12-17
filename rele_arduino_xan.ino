//* En esta práctica vamos a encender un diodo LED conectado al pin 13 durante 10 segundos.
//* Cuando se apague, que será durante un periodo de 4 segundos, se encenderá otro LED conectado al pin 12, y el relé, que estará conectado en el pin 11.

// C++ code
//

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
}
