Name: Grayson Wills

EID: gmw853

Team Number:

## Questions

1. Why does your program need a setup and a loop?

    Setup: used to initialize the board and help set input and output ports
    loop: To keep running code without continous manual input from the user	

2. What is the downside to putting all your code in a loop?

    It will continue to run infinitley even if you do not want it to

3. Why does your code need to be compiled?

    To be able to translate the code to machine language so that the board can process code

4. When lowering the frequency in procedure A, step 4, what is going wrong? Brainstorm some solutions. Dimmers exist in the real world. What is their solution?

    The period between the on and off states is increasing, meaning that it will continuously blink until it is asked to stop. You can increases power without having to blink the light, which is how real life dimmers do this.

5. Why do you need to connect the logic analyzer ground to the ESP32 ground?

    to complete the entire circuit. Simply connecting to the port is not enough to do anything with, you need to have a complete circuit in order to do this

6. What is the difference between synchronous and asynchronous communication?

    Synchronous: needs to be a constant stream of data
    Asynchronous: does not need to be a constant stream of data	

7. Profile of UART: Sent X bytes in Y time 

    6 bits in .7 milliseconds

8. Profile of SPI: Sent X bytes in Y time

    6 bits in .146ms

9. Why is SPI so much faster than UART?

    SPI is synchronous, meaning it can run as fast as it needs. UART is asychronous, so it sends information only as fast as the input allows

10. list one pro and one con of UART

    Pro: Allows for User input
    Con: Slower than other forms of communication

11. list one pro and one con of SPI

    Pro: goes as fast as a clock goes
    Con: needs more parts than average

12. list one pro and one con of I2C

    Pro: can use multiple slave devices
    Con: Requires pullup resistors

13. Why does I2C need external resistors to work?

    because their lines are open drain

## Screenshots

Procedure A, step 1:
![Put path to your image here ->](img/placeholder.png)

Procedure A, step 4:
![Put path to your image here ->](img/placeholder.png)

Procedure B, UART:
![Put path to your image here ->](img/placeholder.png)

Procedure B, SPI:
![Put path to your image here ->](img/placeholder.png)
