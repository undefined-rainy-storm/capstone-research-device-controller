#ifndef OV767X_SUPPORT
#include <Arduino_OV767X.h>
#define OV767X_SUPPORT


/*
 * Circut:
 *  - MODULE -> BOARD
 *  - 3.3    -> 3.3
 *  - GND    -> GND
 *  - SIOC   -> A5
 *  - SIOD   -> A4
 *  - VSYNC  -> 8
 *  - HREF   -> A1
 *  - PCLK   -> A0
 *  - XCLK   -> 9
 *  - D7     -> 4
 *  - D6     -> 6
 *  - D5     -> 5
 *  - D4     -> 3
 *  - D3     -> 2
 *  - D2     -> 0 / RX
 *  - D1     -> 1 / TX
 *  - D0     -> 10
 * */

class ov767x_handler {
private:
  int bytes_per_frame;
public:
  ov767x_handler();

}

#endif

