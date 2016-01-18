#ifndef SmoothAnalogInput_h
#define SmoothAnalogInput_h

#include <Arduino.h>

#define SMOOTH_ANALOG_INPUT_SIZE 32 // Sets maximum available sample size

class SmoothAnalogInput {
    public:
        SmoothAnalogInput();
        void attach(int pin); //DEPRECATED, use setup() instead
		void setup(int pin, int sampleSize);
        void scale(int min, int max);
        int read();
        int raw();
    private:
        int _samples[SMOOTH_ANALOG_INPUT_SIZE];
        int _pin;
        int _sampleSize;
        int _maxSampleSize;
        int _index;
        int _mapMin;
        int _mapMax;
        int _res;
};

#endif
