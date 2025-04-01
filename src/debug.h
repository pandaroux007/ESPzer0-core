#ifndef DEBUG_HEADER
#define DEBUG_HEADER

#define DEBUG_ACTIVE // comment to disable debug

#ifdef DEBUG_ACTIVE
    #define DEBUG_INIT(serialSpeed, time) Serial.begin(serialSpeed); delay(time);
    #define DEBUG_PRINT(msg) Serial.print(msg)
    #define DEBUG_PRINTLN(msg) Serial.println(msg)
#else
    #define DEBUG_INIT(serialSpeed, time)
    #define DEBUG_PRINT(msg)
    #define DEBUG_PRINTLN(msg)
#endif

#endif // DEBUG_HEADER