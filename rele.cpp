/*
 * rele.cpp - control a single rele. It can be local or remoted to an I2C expansion device
 * 
 * Released into the public domain
 */

#include <arduino.h>
#include "rele.h"

Rele::Rele() {
}

void Rele::setAddr(int addr, int state=0) {
  this->addr = addr;
  pinMode(addr, OUTPUT);
  setState(state);
}

void Rele::setState(int state) {
  digitalWrite(addr, state);
  this->state = state;
}

int Rele::getState() {
  return state;
}


