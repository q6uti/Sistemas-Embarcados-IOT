/*
Faça um programa que:
> inicie com todos os leds apagados
> ao Clicar uma vez no "Botão Azul" acenda o Led Azul, mantenha aceso e apague o Verde
> ao Clicar uma vez no "Botão Verde" acenda o Led Verde, mantenha aceso e apague o Azul
*/

void loop()
{
  
  // Se clicar no botão Verde (pino 2), acende Verde (13) e apaga Azul (11)
  if (digitalRead(2) == HIGH) 
  {
    digitalWrite(13, HIGH);
    digitalWrite(11, LOW);
  } 
  
  // Se clicar no botão Azul (pino 7), acende Azul (11) e apaga Verde (13)
  if (digitalRead(7) == HIGH) 
  {
    digitalWrite(11, HIGH);
    digitalWrite(13, LOW);
  }
  
  delay(10);
}
