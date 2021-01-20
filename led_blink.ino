/*

* ***************************  
  written : Binuka Dasunpriya
  date : 10th January 2021
  updated : 20th January 2021
  updated By : Binuka Dasunpriya
  Email : binukadasunpriya@gmail.com
  GitHub : https://github.com/BinukaDasunpriya

* ***************************  

* ***************************
we need : a led
        : a arduino Uno/nano/mega board
        : 2 jumpers
        : a breadboard 
        
        
Led pins : led + = arduino  5 pin
         : led - = adruino Gnd pin      
* ***************************

 */


// initiallize led
int led 5
void setup() {
 // initiallize led as a output
 pinMode(led, OUTPUT);
} 
void loop() {
 //led on
 digitalWrite(led, HIGH);
 //delay
 delay(1000);
 //led off
 digitalWrite(led, LOW);

} 
