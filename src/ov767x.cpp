#include "ov767x.hpp"

ov767x_handler:ov767x_handler() {
  if (!Camera.begin(QVGA, RGB565, 1)) {
    Serial.println("Failed to initialize ov767x module.");
    while (1);
  }
  bytes_per_frame = Camera.width() * Camera.height() * Camera.bytesPerPixel();
}
