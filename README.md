# Arduino_GPIO_control
Quick and easy GUI to control a single pin on an arduino with a python QT GUI interface. 

I have 2 parts to this project:
  Arduino Side
  GUI side

Arduino Side
  Very simple arduino sketch:
  - sets control pin to 7
  - intializes serial connection at baud rate 57600
  - listens for 1 or 0 command to set the pin to a high or low

GUI Side
  - GUI made with QTdesigner
  - python 3.9 -> requirements.txt attached, not all libraries listed are needed
  - GUI will read config.txt for com port of ardiuno and baud rate
  - pressing turn on/off will change text and indicator light
  - included executable file so python is not even needed to run
