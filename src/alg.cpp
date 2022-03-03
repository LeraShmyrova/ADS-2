// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double p = 1.0;
  uint16_t i = 1;
  while (i <= n) {
  p = p * value;
  i += 1;
  }
  return p;
}
uint64_t fact(uint16_t n) {
  uint64_t c = 1;
  uint64_t i = 1;
  while (i <= n) {
  c = c * i;
  i += 1;
  }
  return c;
}
double calcItem(double x, uint16_t n) {
  double res = pown(x, n) / fact(n);
  return res;
}
double expn(double x, uint16_t count) {
  uint16_t i = 1;
  double ch = 0;
  while (i <= count) {
  ch = ch + pown(x, i) / fact(i);
  i += 1;
  }
  ch += 1;
  return ch;
}
double sinn(double x, uint16_t count) {
  double six = 0;
  uint16_t st = 1;
  while (st <= count) {
  six = six + (pown(-1, (st - 1)) * calcItem(x, (2 * st) - 2));
  st +=1;
  }
  return six;
}
double cosn(double x, uint16_t count) {
  double cox = 0;
  uint16_t st = 1;
  while (st <= count) {
  cox = cox + (pown(-1, (st - 1)) * calcItem(x, (2 * st) - 2));
  st +=1;
  }
  return cox;
}
