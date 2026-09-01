/*
Faça um programa que:
> inicie com o led apagado
> ao Clicar uma vez no "Botão Liga" acenda o led vermelho e mantenha aceso
> ao clicar uma vez no "Botão Desliga" apague o Vermelho e mantenha apagado
*/

void setup()
{
  pinMode(2, INPUT);    // Configura o pino 2 como entrada (Botão Liga)
  pinMode(7, INPUT);    // Configura o pino 7 como entrada (Botão Desliga)
  pinMode(13, OUTPUT);  // Configura o pino 13 como saída (LED)
}

void loop()
{
  // Se o botão do pino 2 for pressionado
  if (digitalRead(2) == HIGH) 
  {
    digitalWrite(13, HIGH); // Liga o LED do pino 13
  } 
  
  // Se o botão do pino 7 for pressionado
  if (digitalRead(7) == HIGH) 
  {
    digitalWrite(13, LOW);  // Desliga o LED do pino 13
  }
  
  delay(10); // Pequena pausa para estabilizar a leitura
}
