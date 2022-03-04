#include <stdio.h>
#include <math.h>
#ifdef NAN
/* NAN is supported */
#endif
#ifdef INFINITY
/* INFINITY is supported */
#endif

struct Stats{
    float average=NAN;
    float min=NAN;
    float max=NAN;

};
struct Stats compute_statistics(const float* numberset, int setlength);

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;

void emailAlerter();
void ledAlerter();
