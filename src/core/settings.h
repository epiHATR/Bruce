#ifndef __SETTINGS_H__
#define __SETTINGS_H__

#include <NTPClient.h>

void _setBrightness(uint8_t brightval) __attribute__((weak));

void setBrightness(uint8_t brightval, bool save = true);

void getBrightness();

int gsetRotation(bool set = false);

void setBrightnessMenu();

void setUIColor();

void setRFModuleMenu();

void setRFFreqMenu();

void setRFIDModuleMenu();

void addMifareKeyMenu();

void setSleepMode();

void setDimmerTimeMenu();

void setClock();

void runClockLoop();

#if T_DISPLAY_S3
int gsetNrf24CE(bool set = false);

int gsetNrf24CSN(bool set = false);
#endif

int gsetIrTxPin(bool set = false);

void setIrTxRepeats();

int gsetIrRxPin(bool set = false);

int gsetRfTxPin(bool set = false);

int gsetRfRxPin(bool set = false);

void runClockLoop();

void setSoundConfig();

void setWifiStartupConfig();

void setStartupApp();

void setGpsBaudrateMenu();

void setNetworkCredsMenu();

#endif