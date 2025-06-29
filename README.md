# STM32F407-DISC-Audio-Recording-to-SD-card

Cre: https://youtu.be/NJXrJQPO7jk?si=wc_1wziews_SHNoZ

If I2S1 cannot work, please change to I2S2


# STM32 Microphone Interface Project

## Overview
This project, developed by students at the University of Danang, University of Science and Technology, focuses on interfacing an STM32 microcontroller with a microphone to record audio, store it on a microSD card in WAV format, and enable playback or transfer to a computer. The system also includes post-processing using MATLAB to filter noise from the recorded audio.

## Features
- **Audio Recording**: Captures audio segments using a microphone interfaced with the STM32 via I2S and DMA.
- **Storage**: Stores recorded audio as WAV files on a microSD card using SDIO.
- **Playback/Transfer**: Allows playback of recorded audio on a computer or saving in desired formats after transferring via microSD.
- **Noise Filtering**: Uses MATLAB for post-processing to reduce noise, specifically targeting frequencies above 1500 Hz for clearer audio.

## Hardware Components
- **Microcontroller**: STM32F407VGT6 (STM32F407E-DISCOVERY board)
  - Flash memory: 1 MB
  - RAM: 192 KB
  - Power supply: 3V and 5V
- **Microphone**: Interfaces with STM32 to capture sound waves.
- **MicroSD Card Module**: Stores audio data in WAV format.
- **Computer with MATLAB**: Used for post-processing audio files to filter noise.

## Software Components
- **Firmware**: 
  - Initializes STM32 peripherals (clock, GPIO, ADC, I2S, DMA, SDIO).
  - Implements audio recording loop with PDM to PCM conversion.
  - Manages WAV file creation and storage on microSD.
  - Includes functions like `write2wave_file()` and `stop_recording()` for handling WAV file headers and data.
- **MATLAB**: Used for post-processing to apply a low-pass filter, removing noise above 1500 Hz.
- **Pseudocode**:
  - Initializes MCU, microphone, and SD card.
  - Configures recording parameters (e.g., 44.1 kHz sample rate, 16-bit depth).
  - Records audio into a buffer until duration is reached, converts to PCM, and writes to microSD.
  - De-initializes peripherals after recording.

## Operation
1. **Recording**:
   - Press the record button to start capturing audio.
   - Press again or wait for the set duration to stop recording.
2. **Data Transfer**:
   - Connect the microSD card to a computer.
   - Play back or save the WAV file in the desired format.
3. **Noise Reduction**:
   - Use MATLAB to apply a low-pass filter to remove high-frequency noise (>1500 Hz).

## Achievements
- Successfully interfaced a microphone with the STM32 using I2S and DMA.
- Recorded and stored audio as WAV files on a microSD card.
- Enabled playback of recorded audio on a computer.
- Implemented noise filtering using MATLAB, improving audio clarity.

## Future Work
- Implement on-board noise reduction algorithms to eliminate the need for MATLAB post-processing.
- Enhance system efficiency and audio quality with advanced filtering techniques.

## Team Members and Contributions
- **Luong Nhu Quynh**
- **Vo Van Buu**: Contributed to WAV file filtering.
- **Nguyen Thi Tam**
- **Tran Hoang Minh**
- Tasks included:
  - Microphone interfacing with STM32 (I2S, DMA).
  - Developing recording functionality.
  - SD card interfacing via SDIO.
  - WAV file configuration and handling.
  - Writing and debugging the main program.
  - Testing the system.

## References
- [STM32 Audio Playback and Recording Application Note](https://www.st.com/resource/en/application_note/dm00040802-audio-playback-and-recording-using-the-stm32f4discovery-stmicroelectronics.pdf)
- [AN4309 V2 Book](https://www.st.com)
- [Interfacing PDM Digital Microphones with STM32](https://www.st.com/resource/en/application_note/an5027-interfacing-pdm-digital-microphones-using-stm32-mcus-and-mpus-stmicroelectronics.pdf)

## Notes
- The system currently relies on external MATLAB processing for noise reduction, which is effective for human voice frequencies (250–4000 Hz).
- The project was completed in June 2024 by the 21ECE class under the guidance of Instructor Nguyen Huynh Nhat Thuong and Mentor Nguyen Quang Phuong.
