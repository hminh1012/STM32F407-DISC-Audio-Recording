#ifndef INC_AUDIO_SD_H_
#define INC_AUDIO_SD_H_

#include "stdio.h"
#include <stdint.h>


#define WAV_WRITE_SAMPLE_COUNT 2048 // buffer

uint32_t ahihi();
void sd_card_init();
void start_recording(uint32_t frequency);
void write2wave_file(uint8_t *data, uint16_t data_size);
void stop_recording();
#define WAV_WRITE_SAMPLE_COUNT 2048

#endif /* INC_AUDIO_SD_H_ */
