# 1 REQUIREMENTS:
## 1.1 Introduction:
Wiper is an essential component that used to wipe the raindrops or any water from the windscreen. Wipers are designed
and made to clear the water from a windscreen. Most of cars have two wipers on the windscreen, one on the rear
window and the other on each headlight. The wiper parts visible from outside the car are the rubber blade, the wiper
arm holding the blade, a spring linkage, and parts of the wiper pivots.Existing system manually used control stalk to activate wiper and the process of pulling up wiper is difficult to be
handled. The driver needs to switch on and off the control stalk and it will reduce the driver’s concentration during the
driving. Thus, this system is proposed to solve all these problems
## 1.2 Abstract:
This project is an Viper Control System. 
Ignition Key Position at ACC: The Red LED is ON, if the user button is pressed and held for 2 secs
Wiper ON: Wiper is OFF: On press of the user input, Blue, Green and Orange LEDs come ON one at a time with the set frequency, The frequency changes on every alternate key press, 3 frequency levels with 1, 4 and 8 Hz
Wiper OFF: Wiper is ON: The LED glow pattern stops on the 4th press; the wiper action starts next press onwards as mentioned in step 2
Ignition Key Position at Lock: The Red LED is OFF, if the user button is pressed and held for 2 secs

## 1.3 Features:
1.Blue, Green and Orange LEDs, Come on and OFF alternately for set frequency. State A, RED led will be ON
2.Simple circuit design and easy to understand.

## 1.4 4W'S and 1H:
### What?
* Viper Control system where the Viper of a car is controlled by a wireless key. Viper status will be Indicated through LED's.
### WHY?
* To know the principle behind a Viper system and to manipulate its speed with respect to user's need. 
### WHERE?
* Anywhere the user wants to use the feautures provided.
### WHO?
*  People who are all having Car.
### HOW?
* Through a Simple and single Button.

## 1.5 SWOT ANALYSIS:
### Strength:
- No need of Human Interaction.
- Viper system of Different cars can be Interfaced and handled.
- Easy handle and usage of features through a simple User Button.
- Cost efficient.
### Weakness:
- Limited usage.
- Anyone can access it.
- Timers/Interrupts can be a better approach instead using Delays.
### Opportunity:
- Wide Scope in the Future of Car Viper Managemnet and Control System.
- Cost efficient.
- Since advanced features can increase Car value.
- Automatically run with any manual presence
### Threat:
- Now there are many new developing devices for competition in the Automobiles advancement sector.


# 2 REQUIREMENTS:
## 2.1 High Level Requirements
| ID | High Level Requirements |
| -------- | -------------- |
| HLR1 | System shall display Ignition status of the car |
| HLR2 | System shall display Viper State-1 of the car |
| HLR3 | System shall display Viper State-2  of the car |
| HLR4 | System shall display Viper State-3  of the car |

## 2.2 Low Level Requirements

| ID | Low Level Requirements for HL1|      
| -------- | -------------- | 
| LLR1.1 | Press __Button__ for 2 seconds, Ignition LED_RED shall be on | 
| LLR1.2 | Press __Button__ for 2 seconds, Ignition LED_RED shall be off | 
     
| ID | Low Level Requirements for HL2| 
| -------- | -------------- | 
| LLR2.1 | press  __Button__ all LED's shall be on in alternate fashion in Frequency(1Hz) indicating Viper movement |
| LLR2.2 | press  __Button__ all LED's shall be on in alternate fashion in Frequency(4Hz) indicating Viper movement |
| LLR2.3 | press  __Button__ all LED's shall be on in alternate fashion in Frequency(4Hz) indicating Viper movement |
#  HIGH LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | 
| --- | --- | --- | --- | --- | 
| 01 | Ignition On | 1st 2sec User Button Press | Ignition key status | Displayed Ignition key status  | 
| 02 | Viper On | 1st User Button Press | Viper Status-1Hz | Displayed Viper Status | 
| 03 | Viper On | 2nd User Button Press | Viper Status-4Hz | Displayed Viper Status | 
| 04 | Viper On | 3rd User Button Press | Viper Status-8Hz | Displayed Viper Status | 
| 05 | Ignition Off | 2nd 2sec User Button Press |  Ignition key status  | Displayed Ignition key status  | 

# LOW LEVEL TEST PLAN

| Test ID (for LED)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for ignition_on() | 1st 2sec User Button Press | RED LED ON | RED LED ON | ✅ |
| 02 | Check for led_cycle1() | 1st User Button Press | All LEDs ON | All LEDs ON-1Hz | ✅ |
| 03 | Check for led_cycle1() | 1st User Button Press | All LEDs ON | All LEDs ON-2Hz| ✅ |
| 04 | Check for led_cycle1() | 1st User Button Press | All LEDs ON | All LEDs ON-3Hz | ✅ |
| 04 | Check for ignition_off() | 2nd 2sec User Button Press | RED LED OFF | RED LED OFF | ✅ |
# FOR BUTTON COUNT TO TURNING VIPER ON
| Test ID | Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for Button_Count() | 1 User Button Press | 1 | 1 | ✅ |
| 02 | Check for Button_Count() | 2 User Button Presses | 2 | 2 | ✅ |
| 03 | Check for Button_Count() | 3 User Button Presses | 3 | 3 | ✅ |

---

# 2.1 FLOW CHART
![image](https://user-images.githubusercontent.com/101259618/168324675-baa1b8cd-0631-4f00-b1cf-5d10792d52d8.png)

# 2.2 BLOCK DIAGRAM
![image](https://user-images.githubusercontent.com/101259618/168269444-8e48aadd-b71c-48a2-ba80-98d3e8fc8700.png)

# 2.3 STRUCTURAL DIAGRAM
![image](https://user-images.githubusercontent.com/101259618/168327022-0f0b6895-e1ee-41dc-8309-b6e7d5cb91b9.png)

# 2.4 BEHAVIRAL DIAGRAM

![image](https://user-images.githubusercontent.com/101259618/168431905-2b3a9577-4c7a-4722-83e1-3231e2e2f38f.png)


