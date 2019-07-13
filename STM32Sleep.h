#include <libmaple/gpio.h>
#include <RTClock.h>

typedef enum WakeupReason {
    WR_POWERON,
    WR_RESET,
    WR_STANDBY,
    WR_STOP
};

typedef enum SleepMode {
  STOP,
  STANDBY
} SleepMode;

void sleepAndWakeUp(SleepMode mode, RTClock *rt, uint16_t seconds, bool enableWkup);

void goToSleep(SleepMode mode, bool enableWkup);

void disableAllPeripheralClocks();

void setGPIOModeToAllPins(gpio_pin_mode mode);

void switchToPLLwithHSE(rcc_pll_multiplier pllMultiplier);

WakeupReason wakeupReason();
