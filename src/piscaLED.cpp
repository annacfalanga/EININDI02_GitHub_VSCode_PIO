#include <Arduino.h>
#define onboard 13

void setup() {
  pinMode(onboard, OUTPUT);
}

void loop() {

  unsigned long tempoligado = millis(); // conta quanto tempo faz que o arduino foi ligado em ms
  unsigned long seg = tempoligado / 1000; // transforma tempoligado para segundos precisos
  int segundo = (int)seg; // transforma os segundos para valores inteiros (sem casas decimais)

  if (segundo % 2 != 0) { // se o segundo for ímpar (começa no 1), isto é, se o resto da divisão por 2 for diferente de 0
    digitalWrite(onboard, HIGH); // led liga
  } else { // se o segundo for par (resto da divisão por 2 for 0), led desliga
    digitalWrite(onboard, LOW);
  }
}