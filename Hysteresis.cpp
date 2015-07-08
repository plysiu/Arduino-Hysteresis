#include <Hysteresis.h>
/**
 *
 */
void Hysteresis::insert(float value) {
  if (this->data.size() == 10) {
    this->data.pop_back();
  }
  this->data.insert(this->data.begin(), value);
};
/**
 *
 */
bool Hysteresis::isRising() {
  return data.at(0) >= data.at(data.size() - 1);
};
/***
 *
 */
float Hysteresis::lastValue() {
  return data.at(0);
};