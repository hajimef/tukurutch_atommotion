#ifndef main_h
#define main_h

extern WebsocketsServer wsServer;
void _setup(const char* ver);
void _loop(void);

void setMotorSpeed(uint8_t no, int8_t speed);
void setServoAngle(uint8_t no, uint8_t angle);
void showLED(uint8_t r, uint8_t g, uint8_t b);
void _setLED(uint8_t onoff);
uint8_t _getSw(uint8_t button);
float getIMU(uint8_t index);
void _tone(int sound, int ms);

#endif  // main_h
