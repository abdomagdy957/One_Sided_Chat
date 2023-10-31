# One_Sided_Chat
Master-Slave Communication and Display System with ATmega32 Microcontrollers

The project is centered around utilizing two ATmega32 microcontrollers to establish a communication and display system. The first microcontroller operates as the master, connected to a virtual terminal, while the second microcontroller functions as the slave and is equipped with an LCD screen for displaying received messages.

The master microcontroller initiates the communication by sending strings of data to the first microcontroller via UART (Universal Asynchronous Receiver-Transmitter) protocol. The UART protocol enables asynchronous serial communication, allowing the master microcontroller to transmit data to the first microcontroller in a well-defined format. These messages are then received by the first microcontroller.

Once received, the first microcontroller acts as an intermediate bridge between the master and the slave microcontrollers. It employs the SPI (Serial Peripheral Interface) protocol to transmit the received messages to the second microcontroller. The SPI protocol facilitates synchronous serial communication, ensuring reliable and efficient data transfer between microcontrollers.

The slave microcontroller, which is connected to an LCD (Liquid Crystal Display) screen, is responsible for displaying the received messages. It receives the transmitted data from the first microcontroller via SPI and utilizes the appropriate commands and functions to present the messages on the LCD screen. The LCD screen serves as a visual interface, providing a readable and user-friendly output for the received information.

This project effectively demonstrates the integration of two ATmega32 microcontrollers, using UART and SPI protocols for communication, 
and an LCD screen for visual display. By employing these components, the system enables efficient transmission of data from a virtual terminal to the first microcontroller,
and subsequently, to the second microcontroller for display on an LCD screen.
=
