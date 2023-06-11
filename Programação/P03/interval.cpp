#include "interval.h"

bool semelhante(time_of_day a, time_of_day b) {
    return (a.h == b.h) && (a.m == b.m);
}

bool cedo(time_of_day a, time_of_day b) {
    if (a.h == b.h) {
        if (a.m >= b.m) return false;
        else return true;
    }
    if (a.h < b.h) return true;
    else return false;
}

interval intersection(interval a, interval b) {
    time_of_day zero;
    zero.h = 0;
    zero.m = 0; 
    interval i;
    i.start = zero;
    i.end = zero;
    if (semelhante(a.start, b.start) && semelhante(a.end, b.end)) {
        i = a;
        return i;
    }
    if (cedo(b.start, a.end)) {
        if (cedo(b.start, a.start) && cedo(a.start, b.end)) {
            if (cedo(a.end, b.end)) {
                i = a;
                return i;
            }
            i.start = a.start;
            i.end = b.end;
            return i;
        }
        if (cedo(a.start, b.end) && cedo(a.end, b.end)) {
            i.start = b.start;
            i.end = a.end;
            return i;
        }
    }
    if (cedo(a.start, b.end)) {
        if (cedo(a.start, b.start) && cedo(b.start, a.end)) {
            if (cedo(b.end, a.end)) {
                i = b;
                return i;
            }
            i.start = b.start;
            i.end = a.end;
            return i;
        }
        if (cedo(b.start, a.end) && cedo(b.end, a.end)) {
            i.start = a.start;
            i.end = b.end;
            return i;
        }
    }
    return i;
}

