# Hot Shot Hoops
The idea of my project is I have two sensors that check if a basket is made that also tracks the amount of shots made. This is done with two ultrasonic sensors that are placed above and blow the hoop. When both sensors are trigggered within two seconds the shot is considered made. Once the shot has been made critical information like the shot count and the time the shot was made is placed into a spreadsheet and this repeats as long as the shooter wants.

| **Engineer** | **School** | **Area of Interest** | **Grade** |
|:--:|:--:|:--:|:--:|
| Cyrus W. | Lynbrook Highschool | Electrical Engineering | Rising Junior|

![Headstone Image]![CyrusWongPhoto](https://user-images.githubusercontent.com/108291620/177587754-9b4d568a-f942-49f7-b79b-c4ee471c651d.jpg)


[![Final Milestone]{:target="_blank" rel="noopener"}

# Second Milestone
![IMG-0626](https://user-images.githubusercontent.com/108291620/177650222-92a12154-5168-453d-8b46-8b6ba97360f2.jpg)
My second milestone is changing the type of sensor and having full functionality with my machine which includes having the amount of shots made and the time it was made print out on a spread sheet. I changed my original code so that it worked with the new ultrasonic sensors but the fuctionality of it was exactly the same. The Ultrasonic sensor works by sending out a sound wave at a high frequency and having a reciever that recieves the sound wave reflected from another object which then can be turned into a signal to turn on a LED. One of the issues that I encountered was changing the code to adjust for the ultra sonic sensor. This required me to get more comfortable codinging in C which after a lot of work as was able to do. Another issue I encountered was that the mounts the I recieved were not very malleable so I had to find other ways to attach my sensor to the board in a way that sensed the greatest area possible. Overcoming the problem required a lot of perserverance as I had to do a lot of testing which often failed. In the end I was able to figure it out by learning from all my mistakes and failed attempts. One aspect of my project I look forward to improving is that there is a lot of delay from when the basket is made to when it is posted in the spreadsheet. 

#Circuit design
![Screenshot 2022-07-07 085603](https://user-images.githubusercontent.com/108291620/177824126-5e8cbd8e-5137-476f-9c76-7e0a15cbec36.jpg)
*Reminder You have to do this twice!

# First Milestone
![IMG-0592](https://user-images.githubusercontent.com/108291620/177650239-e5589f48-23bf-4372-9b3b-82660b61846b.jpg)
My first milestone was setting up and hooking up the sensor and LED to the Arduino to ensurethat circut and sensor were performing well. I wrote a code that checked if there was motion within the sensors range and if so it would blink red. The way the PIR sensor worked is there are two sensors that check for heat changes and when there is a change in heat energy in the surrounding environment then it gives off a signal. This signal is then used to turn off a light and publish an event in the app, Particle. At first glance this test seems very rudimentary but I ran into many errors. One of these errors was that usually sensors come with three wires, one red, one black, one white and this was the case for the sensors that I recieved. The problem was that instead of the black wire being ground which is usually the case, the white wire was ground so it tooksome time to figure this our and adjust. Another issue I encountered during this first milestone wasone of the sensors did not work. I was able to deduct this by replacing the working sensor with the sensor that was not working onto the circuit that I knew was working. I plan to fix this issue by buying another sensor that will work. One potential problem that I have found while testing my working sensor is that the sensor does not detect fast movements or objects that well. I will further test the consistency of the PIR sensor when I get my second sensor. If the sensor continues to be inconsistent, I will instead use an ultra-sonic sensor. Although it picks up the movement of the object better, it does not constantly check it's range for movement.

[![Hot Shot Hoops- First Milestone](https://res.cloudinary.com/marcomontalbano/image/upload/v1656718885/video_to_markdown/images/youtube--6E5vMULIlls-c05b58ac6eb4c4700831b2b3070cd403.jpg)](https://www.youtube.com/watch?v=6E5vMULIlls "Hot Shot Hoops- First Milestone")

#Circuit Design
![Screenshot 2022-07-07 092344](https://user-images.githubusercontent.com/108291620/177824356-0cf5724d-f81c-47b4-a66e-f814ee45cc6e.jpg)
* Reminder: Red is power, White is ground, Black is signal for this particular sensor.



# Starter Project - Useless Machine
My starter project was the useless machine. The Useless machine is a machine where you flick the one visible switch on it and the machine mechanically moves to flip the switch back and then hides itself back so the flip once again is the only thing visible outside of the box. The two resistors and the screw temrinal were used to keep the pcb working. There was no coding involved but instead we made use of the mechanics of the motor and arm to completete the machine. Overall the machine revolves around the electric motor. The electric motor operates by having magnets inside and when an electric currenent is released along with a magnetic field, this magnetic field repels the magnet causing it to rotate in a ceratain direction. When the magnetic field is reversed it results in the magnets to repel in the opposite direction, making the motor move in the oppoosite direction. The visible switch causes the motor to rotate in different dirrections. When the switch is triggered the motor spins towards the switch until the arm reaches the switch and pushes it back causing the motor to rotate the opposite way. The motor is the stopped when the bottom of the arm presses on the click switch turning the machine off. One moment where I felt extremely discouraged during the project was when I had to put the box together as many parts did not fix together because of manufacturing issues. During these trying times, I was able to keep my composure and find a solution to my problems such as adding extra washers to tilt the machine the switch would be flicked by the arm. The parts I really enjoyed learning how to solder different components onto the pcb to get the machine to operate. This was also a great project to learn how to make use of many different switches to manipulate motor movement.

[![Cyrus Starter Project](https://res.cloudinary.com/marcomontalbano/image/upload/v1656718172/video_to_markdown/images/youtube--nuEwtelOBq0-c05b58ac6eb4c4700831b2b3070cd403.jpg)](https://www.youtube.com/watch?v=nuEwtelOBq0 "Cyrus Starter Project")
