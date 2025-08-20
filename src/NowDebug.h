#ifndef NOW_DEBUG_H
#define NOW_DEBUG_H

#include <Arduino.h>

extern const int NOW_DEBUG_LEVEL;

void printDebug(const String &info, int level = 0);

#endif // NOW_DEBUG_H
