#include "NowDebug.h"

const int NOW_DEBUG_LEVEL = -1;

void printDebug(const String &info, int level)
{
    if (level > NOW_DEBUG_LEVEL) return;
    Serial.println(info);
}
